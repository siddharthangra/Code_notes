## class is like a blueprint i.e a defined layout for an object to follow 
class Car:
    Color = "blue" ##Defualt color of every entry
    brand = "BMW"


car1 = Car()
##print(car1.brand)
## Car acts here like a blueprint, one can use it to store different model which will be based on this model class

class Student:
    def __init__(self,name, marks):
        self.name = name
        self.marks = marks 
        print("Adding new student in Database ...")


##S1 = Student("compulsion to provide as given in init funciton") ## S1 is a pointer to the object just formed 
##print(S1.name) 

##s2 = Student("Rohan")
##print(s2.name) 


## ATTRIBUTES ##

## It can be seen as universal and unique key in DBMS, where universal key corresponds to a common attriubtue i.e class attribute, which is common for al lentries
## while unique key acts as the object attribute i.e define a particular object from the class


class Student2:
    college_name = "ABC college" ## this is a class attribute now 
    def __init__(self,name, marks):
        self.name = name
        self.marks = marks 
        print("Adding new student in Database ...")

s3 = Student2("Raj", 56)
print(s3.college_name)
print(Student2.college_name)


## METHODS ##
## these are basically the function inside a class

class food:
    def __init__(self, foodname):
        self.foodname = foodname
    
    def comment(self):
        print(self.foodname, "IS DELICIOUS!")
        
    @staticmethod
    def hello():
        print("hello")

bhatura = food("bhatura")
bhatura.comment()

## STATIC METHOD ##
## methods that dont use he self parameter, for eng normally printing hello


## some keywords to know 

## ABSTRACTION ##
## it is the hiding the implementation details of a class and only showing the essential features to the user.

## ENCAPSULATION ##
## Wrapping data and functiong into a single unit (i.e object)

del bhatura.foodname ## to delete an attribute of an objext
del bhatura ## to delete an entire object 
 
class Account:
    def __init__(self, acc_no, acc_pass):
        self.acc_no = acc_no
        self.__acc_pass = acc_pass  ## __ is used to make an attribute private

    def __hello(self):
        print("Hello person!") ## cant be printed when called from outside but can be used in side the scope

    def welcome(self):
        self.__hello()

acc1 = Account("12454","password")
print(acc1.acc_no)
## print(acc1.__acc_pass) 
acc1.welcome()

## i.e Private attributes and methods are meant to be used only within the class and are not accessible from outside the class.

## INHERITANCE ##
## When one class(child/derived) derives the properties and methods of another class(parent/base)

## Parent class
class Carp():
    @staticmethod
    def start():
        print("Car started . . .")

    @staticmethod
    def stop():
        print("Car stopped . . .")

## Child class
class ToyotaaCar(Carp):
    def __init__(self,name):
        self.name = name

car1 = ToyotaaCar("meh")
car1.start()

## The inheritance can be seen as single/multi_level/multiple
## which respectively means, having a single parent, layers of inhreitance, having multiple parents

class Fortuner(ToyotaaCar):
    def __init__(self, type):
        self.type = type

car1 = Fortuner("deisel")
car1.stop()

class A:
    varA = "welcome to class A"

class B:
    varB = "welcome to class B"

class C(A,B):
    varC = "Welcome to class C"

c1 = C()
print(c1.varA)
print(c1.varB)
print(c1.varC)

## Super method in inheritance
## it is used fro calling method of parent class
class Fortuner(ToyotaaCar):
    def __init__(self, type, name):
        self.type = type
        super().__init__(name)

fotunecar= Fortuner("deisel","blah blah")

## class method
## A class meethod is bound too the class and recieves the class as an implict first argument

class Student:
    name = "Anonymous"

    @classmethod
    def changename(self, name):
        self.name = name
## now if i call Student.name it wont give me anonymous

s = Student()
s.changename("sid")
print(Student.name)

## PROPERTY DECORATOR ##
## used for those attributes which are dependent on anohter, more of a simplistic way rathe rof making a new method

class exam:
    def __init__(self,phy,chem,math):
        self.phy = phy
        self.chem = chem
        self.math = math 

    @property
    def percentage(self):
        return (str((self.phy + self.chem + self.math)/3) + "%")
    
stu1 = exam(98,97,99)
print(stu1.percentage)
        
stu1.phy = 84
print(stu1.percentage)

## POLYMORPHISM ##
## When the same operator is allowed to have different meaning acc to the context.

class Complex():
    def __init__(self,real, img):
        self.real = real
        self.img = img

    def shownumber(self):
        print(self.real,"i + ",self.img,"j")

    def __add__(self, num2):
        newReal = self.real + num2.real
        newImg = self.img + num2.img
        return Complex(newReal,newImg )
    
    def __sub__(self, num2):
        newReal = self.real - num2.real
        newImg = self.img - num2.img
        return Complex(newReal,newImg )
    


num1 = Complex(1,3)
num2 = Complex(4,6)

#num3 = num1.add(num2)
#num3.shownumber()

## here u cant get num3 by simply typing num3 = num1 + num2
## that is where polymorphism and dunder fucntion come into play 
## try __add__ in the function name and see what happens

num4 = num1 + num2
num4.shownumber()
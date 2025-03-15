## Create student class that takes name and marks of 3 subjects as arguments in constructor. then create a method to print the average


class Student:
    def __init__(self,name, english_marks, Science_marks, Maths_marks):
        self.name = name
        self.english_marks = english_marks
        self.Science_marks = Science_marks
        self.Maths_marks = Maths_marks

    def Avrage_score(self):
        average_score = (self.english_marks + self.Science_marks + self.Maths_marks)/3
        print(self.name ,"has scored ", round(average_score,2))

s1 = Student("Raj",78,89,90)
s1.Avrage_score()


## Create Account class with 2 attributes- balance and account n
## create methods for debit, credit and printing the balance

class bank:
    def __init__(self, balance,  account_num):
        self.balance = balance
        self.account_num = account_num

    def debit(self, amount):
        self.balance = self.balance - amount

    def credit(self, amount):
        self.balance = self.balance + amount

    def print_balance(self):
        print("Your current balance is ", self.balance)

b1 = bank(0, "278333y949")
b1.credit(59)
b1.print_balance()
b1.debit(25)
b1.print_balance()


#Q3 Define a Employee class with attriubutes role, dept, salary. class shoudl contain a show details method as well
# create an engineer class that inherits properties from employee abd has additional att. name and age

class Employee:
    def __init__(self, role, dept, salary):
        self.role = role
        self.dept = dept
        self.salary = salary

    def showDetails(self):
        print("The employee is recruited as",self.role, "in", self.dept, "with a package of", self.salary, "lpa")

e1 = Employee("intern", "CRd", 500000)
e1.showDetails()

class Engineer(Employee):
    def __init__(self, name , age):
        super().__init__("Engineer", "IT", "75,000")
        self.name = name
        self.age = age


# Create a class called order which stores items and its prices, 
#use dunder function __gt__ to convey that 
#order1 > order2 if price of order1 > price of order 2

class Order:
    def __init__(self, item, price):
        self.item = item
        self.price = price

    def __gt__(self, other):
        return self.price > other.price
    
o1 = Order("bread",80)
o2 = Order("Rusk", 60)

print(o1.__gt__(o2))
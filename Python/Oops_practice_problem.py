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



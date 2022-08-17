class Bank:

    loan = 1000
    def __init__(self,name,age,gender,account_no,city):
        self.name = name
        self.age = age
        self.gender = gender
        self.account_no = account_no
        self.city = city
    def address (self):
        add = f" Name :{ self.name}\n Age :{self.age} \n Gender : {self.gender}\n AadharNO :{self.account_no}\n City : {self.city}"
        return add

    def pay_loan (self,amount):
        self.loan = amount

    @classmethod
    def change_loan(cls,amount):
        cls.loan = amount

    @staticmethod
    def loanpending(pending):
        loanamount = [12000]
        if pending in loanamount:
            print("No Pending")
            return True
        else:
            print("Pending")
            return False


person1= Bank('Gowshick',19,'Male',1234567890125,'Anthiyur')
person2= Bank('Pushpa',46,'Female',1234567890238,'Anthiyur')

Bank.change_loan(12000)

print (person1.loan)
print (person2.loan)

print(person1.loanpending(12000))
print(person2.loanpending(10000))


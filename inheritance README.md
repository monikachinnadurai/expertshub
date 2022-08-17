class mentor:    #class for mentor details of the students
    def __init__(self,name,dept,year,teachername):
        self.name=name
        self.dept=dept 
        self.year=year
        self.teachername=teachername
class Student(mentor):
    fees = 20000
    def __init__(self,name,dept,year,dob,teachername):
        super().__init__(name,dept,year,teachername)
    
    def tobepaid(self,amt):      #Instance Method
        Student.fees= 1000
        return self.fees-amt

    @classmethod
    def totfees(cls,bus):
        if bus=="Yes":
            cls.tot=cls.fees+10000
        else:
            cls.tot=cls.fees
        return cls.tot
    @staticmethod
    def bill():
        print("Total fees of student %s is %d"%(stu1.name,Student.tot))
class Busfee(Student):
    fees=100000
    def __init__(self,name,dept,year,dob,city,teachername):
       super().__init__(name,dept,year,dob,teachername)
       self.city=city

class college(Busfee):
    def __init__(self, name, dept, year, dob, city, teachername):
        super().__init__(name, dept, year, dob, city, teachername)
        print("Student Name : %s   Mentor : %s "%(self.name,self.teachername))

stu1=Student("Nandhu","IT",3,2003,"abc")
print(stu1.fees)
print(stu1.tobepaid(100))
print(Student.fees)
print(Student.totfees("Yes"))
stu1.bill()


stu2=Busfee("Mohan","IT",3,2002,"tvm","cde")
#print(dir(Nandhu))
print(stu1.tobepaid(1000))
print(stu2.fees)
print(stu2.city)
print(stu2.teachername)   #print the name of mentor
#print(Nandhu.__mro__)
stu3=college("akash","IT",3,2002,"cud","lmn")

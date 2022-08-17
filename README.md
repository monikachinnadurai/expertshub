# expertshub
	string, lst = " ", []   # built-in classes

# Class is skeleton or blueprint for a object


class Person:     # class Name

    nationality = "Indian"  # Class variable  are kind of default value for a class

    def __init__(self, name, age, sex, city):  # Constructor is default method in class
        self.name = name
        # Class Attribute are the instantenous values which can be change when object changes
        self.age = age
        self.sex = sex
        self.city = city   # "self" is an common argument to hold the different object name

    def person_bio(self):
        bio = f'{self.name} is {self.age} years old living in {self.city} and {self.name} is a {self.sex}'
        return bio

    def eligibility(self):   # class Method
        if self.age >= 18:
            return f'{self.name} is eligible'
        else:
            return f'{self.name} is not eligible'

# we can create multiple objects from one class


person1 = Person('Sanjay', 19, 'male', 'Chennai')   # Person object1
person2 = Person('Ramya', 14, 'female', 'Hyderabad')  # Person object2

Person.nationality = "American"  # changing class variable for the entire class
person1.nationality = "Indian"  # changing class variable for the particular class

person1.name   # accessing the specific attribute of a specific object
person1.person_bio()  # accessing the specific method of a specific object
Footer

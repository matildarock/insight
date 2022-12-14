# class in python

A class is considered as a blueprint of objects. We can think of the class as a sketch (prototype) of a house. It contains all the details about the floors, doors, windows, etc. Based on these descriptions we build the house. House is the object.
Since many houses can be made from the same description, we can create many objects from a class.


An object is simply a collection of data (variables) and methods (functions). Similarly, a class is a blueprint for that object.


We use the class keyword to create a class in Swift:

```python
    class ClassName:
      # class definition
```


we have created a class:

```python
     class Bike:
      name = ""
      gear = 0
```
Bike - the name of the class
name/gear - variables inside the class with default values "" and 0 respectively.


An object is called an instance of a class. For example, suppose Bike is a class then we can create objects like bike1, bike2, etc from the class.

objectName = ClassName()

```python 
# create class
class Bike:
    name = ""
    gear = 0

# create objects of class
bike1 = Bike()
```


We use the . notation to access the attributes of a class.

```python 
# modify the name property
bike1.name = "Mountain Bike"

# access the gear property
bike1.gear
```
Here, we have used bike1.name and bike1.gear to change and access the value of name and gear attribute respectively.



We can also create multiple objects from a single class

```python 
# define a class
class Employee:
    # define a property
    employee_id = 0

# create two objects of the Employee class
employee1 = Employee()
employee2 = Employee()

# access property using employee1
employee1.employeeID = 1001
print(f"Employee ID: {employee1.employeeID}")

# access properties using employee2
employee2.employeeID = 1002
print(f"Employee ID: {employee2.employeeID}")
```
Output:
Employee ID: 1001
Employee ID: 1002



We can also define a function inside a Python class. A Python Function defined inside a class is called a method.Let's see an example:

```python
# create a class
class Room:
    length = 0.0
    breadth = 0.0
    
    # method to calculate area
    def calculate_area(self):
        print("Area of Room =", self.length * self.breadth)

# create object of Room class
study_room = Room()

# assign values to all the properties 
study_room.length = 42.5
study_room.breadth = 30.8

# access method inside class
study_room.calculate_area()
```
output: Area of Room = 1309.0

Here is also some hints about class:
(https://buttoned-dress-271.notion.site/694b349021ce4be7a0853fec93bde144)






















# python

**What is Python?**

Python is an interpreted, object-oriented, high-level programming language with dynamic semantics. Its high-level built in data structures, combined with dynamic typing and dynamic binding, make it very attractive for Rapid Application Development, as well as for use as a scripting or glue language to connect existing components together. Python's simple, easy to learn syntax emphasizes readability and therefore reduces the cost of program maintenance. Python supports modules and packages, which encourages program modularity and code reuse. The Python interpreter and the extensive standard library are available in source or binary form without charge for all major platforms, and can be freely distributed.

# 10_python_tips

These 30 tips will increase your coding speed

**1_ Slicing:**

a = "Hello World!"
print(a[::-1])

2-**7 F-strings:**

first_name = "John"
age = 19

print(f"Hi, I'm {first_name} and I'm {age} years old!")

3**-The Print Functions ‘end’ Parameter:**

a = ["english", "french", "spanish", "german", "twi"]
for language in a:
print(language, end=" ")

4-**Initializing a list full of numbers:**

[0]*1000 # List of 1000 zeros
[8.2]*1000 # List of 1000 8.2's

5-**Integration of dictionaries:**

x = {'a': 1, 'b': 2}
y = {'b': 3, 'c': 4}
z = {**x, **y}

6-**Merging Dictionaries:**

a = {"a": 1, "b": 2}
b = {"c": 3, "d": 4}

a_and_b = a | b
print(a_and_b)

7-**Return multiple values from a function:**

def get_a_string():
a = "George"
b = "is"
c = "cool"
return a, b, c
sentence = get_a_string()
(a, b, c) = sentence

8-**List comprehension**:

a = [1, 2, 3]
b = [num*2 for num in a] # Create a new list by multiplying each     element in a by 2

9-**Find the most frequent element in a list:**

test = [1, 2, 3, 4, 2, 2, 3, 1, 4, 4, 4]
print(max(set(test), key = test.count))

10-**Convert dictionary to XML:**

from xml.etree.ElementTree import Element
def dict_to_xml(tag, d):
'''
Turn a simple dict of key/value pairs into XML
'''
elem = Element(tag)
for key, val in d.items():
child = Element(key)
child.text = str(val)
elem.append(child)
return elem

#
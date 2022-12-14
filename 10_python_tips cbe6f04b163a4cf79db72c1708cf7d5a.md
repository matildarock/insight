# 10_python_tips

These 10 tips will increase your coding speed

1-**Change values:**

x, y = 1, 2
print(x, y)
x, y = y, x
print(x, y)

2-**Combine a list of strings into a single string:**

sentence_list = ["my", "name", "is", "George"]
sentence_string = " ".join(sentence_list)
print(sentence_string)

3**-Splitting a string into a list of substrings:**

sentence_string = "my name is George"
sentence_string.split()
print(sentence_string)

4-**Initializing a list full of numbers:**

[0]*1000 # List of 1000 zeros
[8.2]*1000 # List of 1000 8.2's

5-**Integration of dictionaries:**

x = {'a': 1, 'b': 2}
y = {'b': 3, 'c': 4}
z = {**x, **y}

6-**Reverse a string:**

name = "George"
name[::-1]

7-**Return multiple values from a function:**

def get_a_string():
a = "George"
b = "is"
c = "cool"
return a, b, c
sentence = get_a_string()
(a, b, c) = sentence

8-List comprehension:

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
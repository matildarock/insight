# C Pointers

****What are Pointers?****
 A **pointer** is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is −

```jsx
type *var-name;
```

Here, **type** is the pointer's base type; it must be a valid C data type and **var-name**
 is the name of the pointer variable. The asterisk * used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Take a look at some of the valid pointer declarations −

<aside>
💡 int    *ip;    /* pointer to an integer */
double *dp;    /* pointer to a double */
float  *fp;    /* pointer to a float */
char   *ch     /* pointer to a character */

</aside>

The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.

**How to Use Pointers?**

![How-Pointer-Works-In-C.png](C%20Pointers%202adda807a4394ff1bd9211ccb9aade54/How-Pointer-Works-In-C.png)

Example:

```jsx
#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
```

When the above code is compiled and executed, it produces the following result −

```jsx
Address of var variable: bffd8b3c
Address stored in ip variable: bffd8b3c
Value of *ip variable: 20
```

****NULL Pointers****

It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a **null** pointer.

The NULL pointer is a constant with a value of zero defined in several standard libraries. Consider the following program −

```jsx
#include <stdio.h>

int main () {

   int  *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr  );
 
   return 0;
}
```

When the above code is compiled and executed, it produces the following result −

<aside>
💡 `The value of ptr is 0`

</aside>

In most of the operating systems, programs are not permitted to access memory at address 0 because that memory is reserved by the operating system. However, the memory address 0 has special significance; it signals that the pointer is not intended to point to an accessible memory location. But by convention, if a pointer contains the null (zero) value, it is assumed to point to nothing.

To check for a null pointer, you can use an 'if' statement as follows −

```
if(ptr)     /* succeeds if p is not null */
if(!ptr)    /* succeeds if p is null */
```

Examples:

```jsx
int i=42 , j=107;
int *p=&i;
int *q =&j
printf("%d\n" , *p)//
```

| Address | Memory |  |
| --- | --- | --- |
| 9016 | 9004 | q |
| 9008 | 9000 | p |
| 9004 | 107 | j |
| 9000 | 42 | i |

what do these lines do?

1)p=q

answer:

| Memory | Memory |  |
| --- | --- | --- |
| 9016 | 9004 | q |
| 9008 | 9004 | p |
| 9004 | 107 | j |
| 9000 | 42 | i |

2)*p=q

answer:

| Address | Memory |  |
| --- | --- | --- |
| 9016 | 9004 | q |
| 9008 | 900 | p |
| 9004 | 107 | j |
| 9000 | 9004 | i |

3)p=*q

answer:

| Address | Memory |  |
| --- | --- | --- |
| 9016 | 9004 | q |
| 9008 | 107 | p |
| 9004 | 107 | j |
| 9000 | 42 | i |

4)*p=*q

answer:

| Address | Memory |  |
| --- | --- | --- |
| 9016 | 9004 | q |
| 9008 | 9000 | p |
| 9004 | 107 | j |
| 9000 | 107 | i |
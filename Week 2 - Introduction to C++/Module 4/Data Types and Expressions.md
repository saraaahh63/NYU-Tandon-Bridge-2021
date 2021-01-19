# Data Types and Expressions

There are three fundamental concepts to understand in any programming language: data types, expressions, and control flows.

![concept table](https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%202%20-%20Introduction%20to%20C%2B%2B/images/table.png)

## Part 1: Integers and Operations

the **int** data type stores integers. In memory, ints are represented with a fixed data size of 4 bytes (32 bits)

### Forms of Data

There are two forms of data **variables** and **constants**.

Variables have a changeable value. Constants have an unchangeable value.

There are two types of constants: **C++ Literals** (6, 7.3, "abc") and **Programmed Define Constants** (const int Max = 5).

### Expressions

Expressions can be built by combining data types with operators. For example, x + 2 combines the variable x and constant 2 (C++ literal) using an arithmetic operator.

A variable or constant assignment like int x = 1 or const int x = 1 is also considered an expression.

Arithmetic operatiors include: + - * / = %

% returns the remainder of divided numbers (mod division). 

In C++, 19 / 7 would return 2 and 19 % 7 would return 5.

### Coding Exercise: Weeks and Days

This program takes a number as input and returns it as the number of full weeks and remaining days. You can find the code [here](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%202%20-%20Introduction%20to%20C%2B%2B/C%2B%2B%20Exercises/weeks%20and%20days/main.cpp). 

## Part 2: float and double

The **float** and **double** data types stores real numbers.

floats are represented using a fixed data size of 4 bytes (32 bits) like ints while doubles are represented using a fixed data size of 8 bytes (64 bits) double the size of floats and ints.

### Forms of Data and Operators

**C++ Literals:**
For double: 3.4, -8.975, 6.0, ...
For float: 3.4f, -8.975f, ...

**Arithmetic Operators:** 
/ = % + - * 

Since the data type is a float or double, the / operator will return real division instead of using the div method of division. So 19.0 / 5.0 will return 3.8

### Coding Exercise: Area of a Circle

This program takes the radius of a circle and returns the area. You can find the code [here](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%202%20-%20Introduction%20to%20C%2B%2B/C%2B%2B%20Exercises/area%20of%20circle/main.cpp). 

### Type Casting

You cannot assign one data type to another, you have to convert them to the same type.

**Casting:** Convering the representation of a data type from one type to another type

                int x1, x2;
                double y1, y2;

                x1 = 6;
                y1 = 6.7;

                y2 = (double)6; // becomes 6.0
                x2 = (int)6.7; // the computer will round down to 6

### Expressions with Mixed Types

What happens when you try to divide a double by an int?

                cout<< 5.0 / 2 <<endl;

The compiler will try to resolve the mixed types using implicit casting (casting that will not lose accuracy). There is no accuracy loss when you convert an int to a double so in this case the compiler will cast 2 into a doubl and the program will output the answer in the form of a double.

What happens in this case?

                int x;
                double y;

                x = 5 / 2;
                y = 5 / 2; // y is a double but 5 and 2 are both ints

An assignment expression has two steps in its evaluation. First, it evaluates the right hand side, then it assigns it to the variable. The first step does not take into account the data type of the variable it is assigning to in the second step. So in this case, the first step would evaluate 5 / 2 using the div method and then the compiler would cast it as a float during the assigning step. y = 5 / 2 = 2.0

## Part 3: char

The **char** data type represents a single character.

Chars are mapped to numbers using the ASCII table and represented in memory using 1 byte (8 bits).

### Coding Exercise: What's My ASCII Value?

This program reads a single character from the user and prints its ASCII value. You can find the code [here](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%202%20-%20Introduction%20to%20C%2B%2B/C%2B%2B%20Exercises/ASCII/main.cpp).

### Forms of Data and Operators

**C++ Literals:**

                char ch;

                ch = 'a'; // enclose with single quotes

Escape Character '\n' represents a line break and can be used in the same way as endl

'\t' = tab, '\\' = back slash itself

**Arithmetic Operators:**

You can add (+) and subtract (-) and assign (=), adding and subtracting will increment/decrement the ASCII value and return the next char in the table.

Chars can be cast to ints and not lose any accuracy.

### Coding Exercise: Convert to UPPER CASE

This program reads a lower case letter and retuns the upper case equivalent. You can find the code [here](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%202%20-%20Introduction%20to%20C%2B%2B/C%2B%2B%20Exercises/uppercase/main.cpp).

### The String Class

Stings are not a C++ built-in type. To use it you need to have: #include<string>

String data types are a sequence of characters. They are noted with double quotes ("abc").

Arithmetic Operators: +, =

## Part 4: bool

bool data types store boolean values, either True or False.

Each bool data uses 1 byte (8 bits). False is represented by a byte of 0s and true is any non-zero value.

C++ literas: true, false

Boolean Operators: !, &&, ||

### The Not Operator (!)

If p is true, !p is false. If p is false, !p is true.

### The And Operator (&&)

If p = true, q = true, then p && q = true. If p = false, q = true, then p && q = false.

### The Or Operator (||)

The or operator works as an inclusive or, meaning both values connected by or can be true. If p = true, q = true, then p || q = true. If p = false, q = false, then p || q = false.

### Boolean Expressions

Atomic Boolean Expressions: C++ literals (true, false)

Arithmetic Expressions: Compared with relational operators (<, >, <=, >=, ==, !=)

Compound Boolean Expressions: Simple boolean expressions combined with boolean operators (!, &&, ||)





























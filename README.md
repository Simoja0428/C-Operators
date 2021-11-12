# C-Basic-Operators
In the last project we took an in depth look at basic data types in C++ programming. The following repository details how we can use Relational, Logical and Arithmetic operators to sort and manipulate data in our basic data types. This section is incredibly important, YOU WILL use all the information in this project in pretty much every project you do from here on out.

## Arthimetic Operators
Arthimetic operators are simply operations that we can perform on number based data types (Integers, Doubles, Floats,  etc.) The chances are you have previously worked with all of these major operations. The 5 major arthimetic operators used in Computer Science are comprised of addition, subtraction, multiplication, division and modulus. 

### Addition
The addition operator is used when we want to add the values of two or more numbers together. When adding numbers together, we will want to make sure that we have this summed value stored in a seperate variable for later usage. Further, it is important to be concious of the types of all variables used in the operation. Remember, integers do not account for decimal values and forgetting this could lead to bugs in your future programs. Below are some examples of using the addition operator in C++.

```c++
int sum = 1 + 2;
double dSum = 1.5 + 3.2 + 1.0;
int wSum = 1.5 + 3;
```

The values of the variables in the code above are as follows:

```
Value of sum: 3
Value of dSum: 5.7
Value of wSum: 4
```

### Subtraction
The subtracion operator is used when we want to subract one or more numbers from a value. When subracting numbers, we will want to make sure that we have this new value stored in a seperate variable for later usage. Further, it is important to be concious of the types of all variables used in the operation. Remember, integers do not account for decimal values and forgetting this could lead to bugs in your future programs. Below are some examples of using the subtraction operator in C++.

```c++
int val = 5 - 2;
double dVal = 3.2 - 4.0;
int wVal = 4.5 - 3;
```

The values of the variables in the code above are as follows:

```
Value of val: 3
Value of dVal: -0.8
Value of wVal: 1
```

### Multiplication
The multiplication operator is used when we want to multiply two or more values together. When multiplying numbers, we will want to make sure that we have this new value stored in a seperate variable for later usage. Further, it is important to be concious of the types of all variables used in the operation. Remember, integers do not account for decimal values and forgetting this could lead to bugs in your future programs. Below are some examples of using the multiplication operator in C++.

```c++
int mul = 4 * 3;
double dMul = 1.5 * 2.0;
int wMul = 4.5 * 3;
```

The values of the variables in the code above are as follows:

```
Value of mul: 12
Value of dMul: 6.0
Value of wMul: 12
```

### Division
The division operator is used when we want to divide one or more numbers from a value. When dividing numbers, we will want to make sure that we have this new value stored in a seperate variable for later usage. Further, it is important to be concious of the types of all variables used in the operation. Remember, integers do not account for decimal values and forgetting this could lead to bugs in your future programs. Below are some examples of using the division operator in C++.

```c++
int div = 4 / 2;
double dDiv = 4.5 / 3;
int wDiv = 4.5 / 3;
```

The values of the variables in the code above are as follows:

```
Value of div: 2
Value of dDiv: 1.5
Value of wDiv: 1
```

### Modulus
The modulus operator is used when we want to find the remainder given by dividing two numbers. When using modulus, we will want to make sure that we have this new value stored in a seperate variable for later usage. The modulus operator is more complex than the other arithmetic operators and is not avaliable in lower-level assembly programming languages. Below are some examples of using the modulus operator in C++.

```c++
int mod = 4 % 2;
int mod2 = 7 % 3;
int mod3 = 4 % 0;
```

The values of the variables in the code above are as follows:

```
Value of mod: 0
Value of mod2: 1
Value of mod3: 4
```

## Relational Operators
Relational operators are simply operations that we can use on number based data types (Integers, Doubles, Floats,  etc.) to compare them. The chances are you have previously worked with all of these major operators. They include: Greater Than, Less Than, Greater Than or Equal To, Less Than or Equal To, Equal To, and Not Equal To.

### Greater Than, Greater Than or Equal To, Less Than, Less Than or Equal To
The operators: Greater Than, Less Than, Greater Than or Equal To and Less Than or Equal To are fairly simple to use. They are used in the same way you would use them mathematically in order to compare a series of numerical values. Below are some examples of using theses operators in C++, remember they are used for comparison.

```c++
if ( 5 > 2 )
  cout << "5 is greater than 2." << endl;
if ( 4 <= 1 )
  cout << "This should not run." << endl;
if ( 4 < 10 )
  cout << "4 is less than 10." << endl;
```

The output of using the comparison operators aboves are as follows:

```
5 is greater than 2.
4 is less than 10.
```

### Equal To and Not Equal To
The operators used for Equal To and Not Equal To are a bit different from the other relational operators; mainly, the Equal To and Not Equal To operators can also be used on other data types including strings and pointers. The Equal To and Not Equal To operators are incredibly common and used for comparison. Below are some examples of using theses operators in C++.

```c++
if ( 10.0 == 10 )
  cout << "10.0 is equal to 10." << endl;
if ( 'a' != 'a' )
  cout << "This should not run." << endl;
if ( "jacob" != "john" )
  cout << "The name jacob is not equal to john." << endl;
```


The output of using the Equal To and Not Equal To operators aboves are as follows:

```
10.0 is equal to 10.
The name jacob is not equal to john.
```

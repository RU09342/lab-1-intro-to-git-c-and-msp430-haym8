# Math Library for MSP430
## Overview
This is a library for basic math functions. A header file was provided in math.h, 
and a math.c file was made for that header.
## Dependencies
This library requires a header file to be referenced in the main file. The header file is called "math.h" and has one function header:
```
int math(int n1, int n2, char Operation);
```
## Usage
Download the math.c and math.h files into the same directory, and call the math function in the main method.
```
math(int1, int2, operation);
```
## Functions
### Add
This function takes two numbers and returns the sum. The operator is "+". 
#### Example (3 + 4)
```
math(3, 4, '+')
```
### Subtract
This function takes two numbers and returns the difference. The operator is "-". 
#### Example (10 - 5)
```
math(10, 5, '-')
```
### Multiply
This function takes two numbers and returns the product. The operator is "*". 
#### Example (10 * 5)
```
math(10, 5, '*')
```
### Divide
This function takes two numbers and returns the integer quotient. The operator is "/". Division by zero will result in an error.
#### Example (32 / 8)
```
math(32, 8, '/')
```
### Modulus
This function takes two numbers and returns the remainder. The operator is "%". 
#### Example (12 % 5)
```
math(12, 5, '%')
```

## Known Errors
There will be an error if there is division by zero, as that would return an undefined number.

## Tasks
* [x] Implement basic math functions
* [] Make sure it implements over UART
* [] Test on MSP430
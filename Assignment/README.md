# Math Library for MSP430
This is a library for basic math functions. A header file and program file are provided. This program can run across all processors. The main function of this library is to handle math problems after receiving data.
# Getting Started
### Dependencies
There are no dependencies outside of this project. This library requires the math header file to be referenced in the main file. The header file is called "math.h" and has one function header:
```c
int math(int n1, int n2, char Operation);
```
## Usage
Download the math.c and math.h files into the same directory, and call the math function in the main method.
```c
math(int1, int2, operation);
```
## Functions
### Add
This function takes two numbers and returns the sum. The operator is "+". 
#### Example (3 + 4)
```c
math(3, 4, '+');
```
### Subtract
This function takes two numbers and returns the difference. The operator is "-". 
#### Example (10 - 5)
```c
math(10, 5, '-');
```
### Multiply
This function takes two numbers and returns the product. The operator is "*". 
#### Example (10 * 5)
```c
math(10, 5, '*');
```
### Divide
This function takes two numbers and returns the integer quotient. The operator is "/". Division by zero will result in an error.
#### Example (32 / 8)
```c
math(32, 8, '/');
```
### Modulus
This function takes two numbers and returns the remainder. The operator is "%". 
#### Example (12 % 5)
```
math(12, 5, '%');
```

## Known Errors
There will be an error if there is division by zero, as that would return an undefined number.

## Tasks
* [x] Implement basic math functions
* [x] Make sure UART implementation works on MSP430

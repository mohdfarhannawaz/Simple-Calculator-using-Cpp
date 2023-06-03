# Simple-Calculator-using-Cpp
This repository contains a simple calculator having the functionality of addition , subtraction , multiplication , division , modulus of two numbers entered by user by use of do while loop and nested if else statements. Its beginner friendly.

#Explaination of the code

```cpp
#include <iostream>
```
This line includes the iostream library, which allows input and output operations such as printing messages to the console.

```cpp
int main() {
```
This line declares the main function, which is the entry point of the program.

```cpp
char op;
```
This line declares a variable 'op' of type char, which will be used to store the user's choice of whether to continue the calculator or not.

```cpp
std::cout<<"This is a basic calculator\n";
```
This line prints a message to the console, informing the user that they are using a basic calculator.

```cpp
do{
```
This line starts a do-while loop, which will allow the user to perform multiple calculations until they choose to exit.

```cpp
double num1{0}, num2{0};
```
This line declares two variables 'num1' and 'num2' of type double and initializes them to 0. These variables will store the numbers entered by the user for calculations.

```cpp
int a{0}, b{0};
```
This line declares two variables 'a' and 'b' of type int and initializes them to 0. These variables will be used for calculating the remainder.

```cpp
int c;
```
This line declares a variable 'c' of type int. It will store the user's choice of operation.

```cpp
std::cout<<"\nPress 1: For Addition\n";
std::cout<<"Press 2: For Subtraction\n";
std::cout<<"Press 3: For Multiplication\n";
std::cout<<"Press 4: For Division\n";
std::cout<<"Press 5: For Remainder\n";
```
These lines print a menu of available operations to the console, prompting the user to enter their choice.

```cpp
std::cout<<"Enter the operation : ";
std::cin>>c;
```
This line prints a message asking the user to enter their choice of operation, and then reads the input from the user and stores it in the variable 'c'.

```cpp
if(c==1) {
    // Addition code
}
else if(c==2) {
    // Subtraction code
}
else if(c==3) {
    // Multiplication code
}
else if(c==4) {
    // Division code
}
else if(c==5) {
    // Remainder code
}
else {
    // Invalid operation code
}
```
These lines use conditional statements to check the value of 'c' and execute different blocks of code based on the user's choice of operation.

```cpp
std::cout<<"\nDo You want to Continue? Press (y) to continue : ";
std::cin>>op;
```
This line asks the user if they want to continue using the calculator. The user's response is read and stored in the variable 'op'.

```cpp
} while(op == 'y' || op == 'Y' );
```
This line checks if the value of 'op' is 'y' or 'Y', and if so, it continues the loop and prompts the user for another operation. If the value of 'op' is different, the loop terminates.

```cpp
std::cout<<"\nSee You Next Time\n";
```
This line prints a farewell message to the console, indicating that the program is about to end.

```cpp
return 0;
```
This line terminates the main function and returns the value 0, indicating successful program execution.

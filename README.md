# Calculator Program Documentation

This is a simple command-line calculator program that allows users to perform basic arithmetic operations on two numbers.
Getting Started

## To use the calculator program, simply follow these steps:

### Compiling the C++ program manually

1. Open the program in your preferred C++ IDE or text editor.

2. Navigate to the directory where your program is saved using the command line.

3. Use the appropriate C++ compiler command to compile the program into an executable file. For example:

    `g++ myprogram.cpp -o myprogram`

4. This command will compile the myprogram.cpp file and generate an executable file named myprogram.

5. Run the executable file in your command-line interface.

### Using the precompiled executable file

1. Download the precompiled executable file from the release.
    
2. Navigate to the directory where the executable file is saved using the command line.

3. Run the executable file in your command-line interface. For example:

`./myprogram`

This command will run the executable file named myprogram.

## Usage

1. Enter the first number when prompted by the program.
2. Enter the desired operation (+, -, *, or /) when prompted.
3. Enter the second number when prompted.
    The program will then calculate and output the result of the operation.

## Example

Here's an example of how to use the calculator program:

```
Enter Number: 10
Enter OP: +
Enter Number: 5
result: 15
```

In this example, the user enters the first number as 10, the operation as addition (+), and the second number as 5. The program then calculates the sum of the two numbers (10 + 5) and outputs the result as 15.
Supported Operations

The calculator program supports the following arithmetic operations:

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)

## Error Handling

If the user enters an invalid operation, the program will output an error message and prompt the user to try again with a valid operation. If the user enters a second number of 0 when performing division, the program will output an error message and prompt the user to try again with a non-zero second number.

## Conclusion

This calculator program is a simple tool for performing basic arithmetic operations on two numbers. With its easy-to-use interface and error handling, it is a useful tool for anyone in need of quick calculations.
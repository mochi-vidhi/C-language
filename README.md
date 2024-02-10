# C-language
# Introduction to c
- C is a procedural programming language initially developed by Dennis Ritchie in the year 1972 at Bell Laboratories of AT&T Labs.
- It was mainly developed as a system programming language to write the UNIX operating system.
- The main features of the C language include:
- 1.General Purpose and Portable
- 2.Low-level Memory Access
- 3.Fast Speed
- 4.Clean Syntax
- These features make the C language suitable for system programming like an operating system or compiler development.
- Application of C :
- 1 Operating systems,2 Embedded systems,3 System software
- 4 Networking,5 Database systems,6 Gaming
# Compiling the C Programs
- Commands For Compile and Run
- To compile: gcc filename.c -o filename.exe
- To run: .\filename.exe
- [Print Hello world!!](./BasicPrograms/Helloworld.c)
- [Print About Your self](./BasicPrograms/YourSelf.c)
- [Print Information About Cricket](./BasicPrograms/Cricket.c)
- [Print Information About Your favourite Animal](./BasicPrograms/Animal.c)
# C Comments
- The comments in C are human-readable explanations or notes in the source code of a C program.
- A comment makes the program easier to read and understand.
- Types of comments in C
- In C there are two types of comments in C language:
  1 Single-line comment(//)  2 Multi-line comment(/*---*/)
- [Single line comment](./Comments/singleline.c)
- [Multi line comment](./Comments/Multiline.c)
# Tokens in C
- [Types of Tokens](https://www.geeksforgeeks.org/tokens-in-c/?ref=lbp)
# Variables in C
- variable is a local storage of your code.(RAM)
- DECLARATION OF VARIABLES:
- data_type var_name; EX  int number; 
- ASSIGN VALUE TO VARIABLES:
- data_type var_name=value; EX int age=18;
- RULES FOR NAMING VARIABLES:
- 1.must start with _underscorer or alphabets. EX._underscorer var_name or int number
- 2.not start with number[0-9] or special character. EX.data_type 9 or data_type @
- 3.do not any reserved keyword. EX. data_type if 
- 4.do not use any special character or space in var_name. EX.hard disk,hard@disk
- Types of variable:
-  [Global & Local variable]() 
- Programs of Variables:
- [Print Age](./Variables/Age.c)
- [Print Variables](./Variables/PrintValues.c)
- [Computer Hardwares](./Variables/Hardware_info.c)
- [Print height & width](./Variables/Height_width.c)
# Constants in C
- The constants in C are the read-only variables whose values cannot be modified once they are declared in the C program.
- The type of constant can be an integer constant, a floating pointer constant, a string constant, or a character constant.
- [Constants Defination](./Constants/const_defination.c)
# Data-types in C
- 1 [Primary DataType/Primitive data-type](./DataTypes/primitivedt.c) - int,float,char,double
- 2 [Size of DataType](./DataTypes/sizeof.c)
- 2 Void DataType - void,No input & output,Empty,NULL.
- 3 Derived DataType - Pointer,Function,String,Array
- 4 User Define DataType - Structure,Union,Enum,Typedef
# Basic Input and Output in C
- C language has standard libraries that allow input and output in a program.
- The stdio.h or standard input output library in C that has methods for input and output.
- [Formate specifiers](https://www.geeksforgeeks.org/format-specifiers-in-c/?ref=lbp)
- printf() : In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen).
  The printf function is a part of the C standard library <stdio.h> and it can allow formatting the output in numerous ways.
- scanf() : In C programming language, scanf is a function that stands for Scan Formatted String.
- It is used to read data from stdin (standard input stream i.e. usually keyboard) and then writes the result into the given arguments.
  It accepts character, string, and numeric data from the user using standard input.
  scanf also uses format specifiers like printf.
- [Take input from user about computer hardwares ](./Input&output/Hardware_comp.c)
- [Take User input about Society](./Input&output/Society.c)
- [Take User input about Collage ](./Input&output/collage.c)
- [Take User input about Student](./Input&output/student.c)
# Operators 
- In C language, operators are symbols that represent operations to be performed on one or more operands.
- a + b = c  equation / operation
- a, b, c  operand
- +, =    Operators
- Types of Operators
- [1. Arithmatic Operators](./Operators/Arithmetic)
- [2. Assignment Operators](./Operators/Assignment)
- [3. Relational Operators](./Operators/Relational)
- [4. Bitwise Operators](./Operators/Bitwise)
- [5. Conditional Operators](./Operators/Conditional)
- [6. Logical Operators](./Operators/Logical)
# Decision Making / Conditional statements 
- The conditional statements (also known as decision control structures) such as if, if else, switch, etc. are used for decision-making purposes in C programs.
- Need of Conditional Statements:
- There come situations in real life when we need to make some decisions and based on these decisions, we decide what should we do next.
- [if Statement](./DecisionMaking/If_Statements)
- [if-else Statement](./DecisionMaking/If&Else)
- [if-else-if Ladder](./DecisionMaking/if_else_if_ladder)
- [switch Statement](./DecisionMaking/SwitchCase)
- [Jump Statements]() break,continue,goto,return
# C – Loops
- Loops in programming are used to repeat a block of code until the specified condition is met.
- A loop statement allows programmers to execute a statement or group of statements multiple times without repetition of code.
- There are mainly two types of loops in C Programming:
- Entry Controlled loops: In Entry controlled loops the test condition is checked before entering the main body of the loop.
- 1 [For Loop](./Loops/for-loop) & 2 [While Loop](./Loops/While-loop) is Entry-controlled loops.
- Exit Controlled loops: In Exit controlled loops the test condition is evaluated at the end of the loop body.
  The loop body will execute at least once, irrespective of whether the condition  is true or false.
-  1 [do-while Loop](./Loops/Do-while-loop) is Exit Controlled loop.
# C Arrays
- Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing multiple values under a single name.
- An array in C is a fixed-size collection of similar data items stored in contiguous memory locations.
- It can be used to store the collection of primitive data types such as int, char, float, etc., and also derived and user-defined data types such as pointers, structures, etc.

# Introduction to C++

**Learning Objectives**
* [Understand process of executing a program](#process-of-executing-a-program)
* [Understand compilation](#compilation)
* [Write a simple C++ program](#writing-a-c-program)

## Process of Executing a Program

Programs are executed by the CPU. First, the required data (stored in bytes) is copied from a specific location in secondary memory to RAM. Then, the CPU initiates the fetch-execute cycle and fetches the first instruction from RAM, decodes it, and executes it. Once an instruction is executed, the CPU's program counter register decreases by one. The CPU continues to run the fetch-execute cycle until the PC register reaches zero and the program is complete.

## Compilation

Compilation is the process of translating programs written in high level languages into machine language that can be read by the computer. This process is carried out by a compiler.

## Writing a C++ Program

We wrote a simple program the takes two numbers as an input and returns the sum. The code for this program can be found [here](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%202%20-%20Introduction%20to%20C%2B%2B/C%2B%2B%20Exercises/main.cpp).

Some things to note:
* /* */ and // signify comments
* "#include < iostream > using namespace std;" must be at the start of every program
* Entire program takes place inside function int main(){ }
* ; ends instructions
* Include "return 0" at the end of programs

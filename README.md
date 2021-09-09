# SudokuSolver

This program solves a Sudoku with the backtracking approach.
The program accepts a two-dimensional integer array as input and
also delivers a two-dimensional integer array as output, which represents the solved Sudoku field.

## Backtracking

Backtracking is an algorithm for solving problems recursively. 
It tries to build a solution incrementally, one piece at a time, 
removing those solutions that fail to satisfy the constraints of the problem immediately.<br>

For example the Sudoku solving Problem, we try filling digits one by one. Whenever we find that current digit cannot lead to a solution, we remove it (backtrack) and try next digit. This is more efficient than naive approach by generating all possible combinations of digits and then validating each combination.
Backtracking drops permutations whenever it backtracks to increase efficiency.<br>

## Compile this Project

This project is compiled and tested on the platforms windows and linux.

### Linux

Tested on: g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Navigate into the cloned git repo folder, build and execute the program.
```
cd SudokuSolver
g++ *.cpp -o SudokuSolver.out
./SudokuSolver.out
```

### Windows
Tested on: Windows 10 Pro, Visual Studio 2019
Compiler: Microsoft (R) C/C++-Optimierungscompiler Version 19.27.29112 für x86

Just import the Files into Visual Studio, build and run.
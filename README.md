# SudokuSolver

This program solves a Sudoku with the backtracking approach.
The program accepts a two-dimensional integer array as input and
also delivers a two-dimensional integer array as output, which represents the solved Sudoku field.<br>
Additionally, it writes the result to csv file.<br>

## Backtracking

Backtracking is an algorithm for solving problems recursively. 
It tries to build a solution incrementally, one piece at a time, 
removing those solutions that fail to satisfy the constraints of the problem immediately.

For example the Sudoku solving Problem, we try filling digits one by one. Whenever we find that current digit cannot lead to a solution, we remove it (backtrack) and try next digit. This is more efficient than naive approach by generating all possible combinations of digits and then validating each combination.
Backtracking drops permutations whenever it backtracks to increase efficiency.<br>
<br>

## Types of Backtracking Algorithms

Some sources explain, that there are two types of backtracking algorithms:
* recursive backtracking
* non-recursive backtracking
<br>

In general, any recursive algorithm can be converted into an iterative algorithm. Therefore it is not correct to subdivide a backtracking algorithm into different types, because whenever backtracking is used, a possible solution is tried through recursion and if it is wrong, it is immediately reversed. This can be done iteratively with the LIFO stack principle or recursively, but the type of solution search remains so-called "backtracking".

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
Tested on: Windows 10 Pro, Visual Studio 2019<br>
Compiler: Microsoft (R) C/C++-Optimierungscompiler Version 19.27.29112 für x86<br><br>

Just import the Files into Visual Studio, build and run.

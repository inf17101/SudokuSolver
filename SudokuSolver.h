#pragma once
#include <iostream>
#include <vector>

using Sudoku = std::vector<std::vector<int>>;
class SudokuSolver
{
private:
	Sudoku _board;
	int _filled;

private:
	bool isValidInsertion(int row, int col, int num);
	int gridRowPos(int row, int i);
	int gridColPos(int col, int i);
public:
	SudokuSolver(Sudoku& board);
	void printSudoku();
	bool solveSudoku();
	Sudoku const getSolution() const;
};


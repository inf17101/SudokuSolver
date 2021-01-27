#include "SudokuSolver.h"

SudokuSolver::SudokuSolver(Sudoku& board) : _board(board), _filled(0) {}

void SudokuSolver::printSudoku()
{
	std::cout << "--------------------" << std::endl;
	for (auto& row : _board)
	{
		for (auto& value : row)
		{
			std::cout << value << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << "--------------------" << std::endl;
}

int SudokuSolver::gridRowPos(int row, int i)
{
	return (3*(row / 3)) + i / 3;
}

int SudokuSolver::gridColPos(int col, int i)
{
	return (3 * (col / 3)) + i % 3;
}

bool SudokuSolver::isValidInsertion(int row, int col, int num)
{
	for (int i = 0; i < _board.size(); ++i)
	{
		if (_board[row][i] == num) { return false; }
		if (_board[i][col] == num) { return false; }
		if (_board[gridRowPos(row, i)][gridColPos(col, i)] == num) { return false; }
		_filled += 1;
	}
	return true;
}

bool SudokuSolver::solveSudoku()
{
	for (int r = 0; r < _board.size(); ++r)
	{
		for (int c = 0; c < _board.size(); ++c)
		{
			if (_board[r][c] == 0)
			{
				for (int i = 1; i <= 9; ++i)
				{
					if (isValidInsertion(r, c, i))
					{
						_board[r][c] = i;
						if (solveSudoku())
							return true;
						_board[r][c] = 0;
					}
				}
				return false;
			}
		}
	}
	return true;
}

Sudoku const SudokuSolver::getSolution() const
{
	return _board;
}
#include <iostream>
#include <fstream>
#include "SudokuSolver.h"
#include "FileExporter.h"

int main()
{
	Sudoku sudoku = {
		{2,0,0,4,0,0,0,1,6},
		{1,0,0,0,0,2,3,0,0},
		{0,9,5,0,0,0,0,7,0},
		{0,0,0,0,8,0,0,0,0},
		{0,0,1,9,0,5,6,0,0},
		{0,0,0,0,2,0,0,0,0},
		{0,7,0,0,0,0,1,8,0},
		{0,0,9,2,0,0,0,0,3},
		{3,5,0,0,0,6,0,0,2}
	};

	SudokuSolver ssolver(sudoku);
	std::cout << "unsolved sudoku: " << std::endl;
	ssolver.printSudoku();

	if (ssolver.solveSudoku())
	{
		std::cout << "solved sudoku: " << std::endl;
		ssolver.printSudoku();
		std::ofstream of("sudokuSolution.csv");
		FileExporter<int> fexporter(of);
		fexporter.exportAsCSV(ssolver.getSolution());
	}
	
	return 0;
}
#include <iostream>
#include <fstream>
#include "SudokuSolver.h"
#include "FileExporter.h"

/*
	@author  Oliver Klapper
	This program solves a Sudoku with the help of the backtracking approach.
	The program accepts a two-dimensional integer vector as input and 
	also delivers a two-dimensional integer vector as output, 
	which represents the solved Sudoku field.
*/

int main()
{
	/* input sudoku field 2d vector */
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

	// print input sudoku in unresolved state
	ssolver.printSudoku();

	// solve sudoku and print result
	if (ssolver.solveSudoku())
	{
		std::cout << "solved sudoku: " << std::endl;
		ssolver.printSudoku();

		// write sudoku result to csv file
		std::ofstream of("sudokuSolution.csv");
		FileExporter<int> fexporter(of);
		fexporter.exportAsCSV(ssolver.getSolution(), ';');
	}
	
	return 0;
}
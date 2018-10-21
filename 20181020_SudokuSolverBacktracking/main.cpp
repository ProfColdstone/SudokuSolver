#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#define UNASSIGNED 0
#define N 9
#include "functions.h"

int main()
{
	// 0 means unassigned cells 
	int grid[N][N] = { {3, 0, 6, 5, 0, 8, 4, 0, 0},
					  {5, 2, 0, 0, 0, 0, 0, 0, 0},
					  {0, 8, 7, 0, 0, 0, 0, 3, 1},
					  {0, 0, 3, 0, 1, 0, 0, 8, 0},
					  {9, 0, 0, 8, 6, 3, 0, 0, 5},
					  {0, 5, 0, 0, 9, 0, 6, 0, 0},
					  {1, 3, 0, 0, 0, 0, 2, 5, 0},
					  {0, 0, 0, 0, 0, 0, 0, 7, 4},
					  {0, 0, 5, 2, 0, 6, 3, 0, 0} };

	std::vector<std::vector<int>> grid1;
	std::ifstream inputSudoku{ "SudokuTest.txt" };
	if (!inputSudoku.is_open()) return -1;


	int num{ 0 };
	while (inputSudoku >> num)
		grid1.emplace_back(num);

	//getchar();
	std::cout << grid1[1][1];

	/*if (SolveSudoku(grid) == true)
		printGrid(grid);
	else
		printf("No solution exists\n");*/

	system("pause");
	return 0;
}
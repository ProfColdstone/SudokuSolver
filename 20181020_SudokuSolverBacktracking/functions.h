#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// This function finds an entry in grid that is still unassigned 
bool FindUnassignedLocation(int[N][N], int&, int&);

// Checks whether it will be legal to assign num to the given row, col 
bool isSafe(int[N][N], int, int, int);

/* Takes a partially filled-in grid and attempts to assign values to
  all unassigned locations in such a way to meet the requirements
  for Sudoku solution (non-duplication across rows, columns, and boxes) */
bool SolveSudoku(int[N][N]);

/* Searches the grid to find an entry that is still unassigned. If
   found, the reference parameters row, col will be set the location
   that is unassigned, and true is returned. If no unassigned entries
   remain, false is returned. */
bool FindUnassignedLocation(int[N][N], int&, int&);

/* Returns a boolean which indicates whether an assigned entry
   in the specified row matches the given number. */
bool UsedInRow(int[N][N], int, int);

/* Returns a boolean which indicates whether an assigned entry
   in the specified column matches the given number. */
bool UsedInCol(int[N][N], int, int);

/* Returns a boolean which indicates whether an assigned entry
   within the specified 3x3 box matches the given number. */
bool UsedInBox(int[N][N], int, int, int);

/* Returns a boolean which indicates whether it will be legal to assign
   num to the given row,col location. */
bool isSafe(int[N][N], int, int, int);

/* A utility function to print grid  */
void printGrid(int[N][N]);

#endif // !FUNCTIONS_H
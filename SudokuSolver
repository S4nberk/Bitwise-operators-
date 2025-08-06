#include <stdio.h> 
#include <stdbool.h>

void printSudoku(int grid[9][9]) {
	for (int row = 0; row < 9; row++) {
		if (row % 3 == 0 && row != 0)
			printf("---------------------\n");

		for (int col = 0; col < 9; col++) {
			if (col % 3 == 0 && col != 0) {
			printf("|");
		  }
			printf("%d ", grid[row][col]);
	  }
    printf("\n");
  }
}

bool isValid(int grid[9][9], int row, int col, int num) {
	for ( int x = 0; x < 9; x++) {
		if (grid[row][x] == num)
			return false;
	}
	for (int y = 0; y < 9; y++) {
		if (grid[y][col] == num)
			return false;
	}

	int startCol = col - col % 3;
	int startRow = row - row % 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (grid[startRow + i][startCol + j] == num)
					return false;
			}
		}
	return true;
}

bool solveSudoku(int grid[9][9]){
	for (int row = 0; row < 9; row++){
		for (int col = 0; col < 9; col++){
			if (grid[row][col] == 0){
				for (int num = 1; num <= 9; num++){
					if (isValid(grid, row, col, num)){
						grid[row][col] = num;
						if (solveSudoku(grid))
							return true;
						else grid[row][col] = 0;
					}
				}
				return false;
			}
		}
	}
	return true;
}

int main(){
//sample sudoku
	int grid[9][9] = {
	{0, 0, 0, 2, 6, 0, 7, 0, 1},
	{6, 8, 0, 0, 7, 0, 0, 9, 0},
	{1, 9, 0, 0, 0, 4, 5, 0, 0},
	{8, 2, 0, 1, 0, 0, 0, 4, 0},
	{0, 0, 4, 6, 0, 2, 9, 0, 0},
	{0, 5, 0, 0, 0, 3, 0, 2, 8},
	{0, 0, 9, 3, 0, 0, 0, 7, 4},
	{0, 4, 0, 0, 5, 0, 0, 3, 6},
	{7, 0, 3, 0, 1, 8, 0, 0, 0}
	};

	if (solveSudoku(grid)) {
		printf("Cozum bulundu:\n");
		printSudoku(grid);
	}
	else {
		printf("Cozum bulunamadı.\n");
	}
	return 0;
}

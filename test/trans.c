// Standard C Library
#include <stdio.h>
#include <stdlib.h>
// Transpose header
#include "trans.h"

// Transpose Function
int trans(double* input, double* output, int row, int col){
	int i = 0;
	int j = 0;

	// Transposing Matrix i.e output[i][j] == input[j][i]
	for(i = 0; i < row; ++i){
		for(j = 0; j < col; ++j){
			output[j*row + i] = input[i*col + j];
		}
	}
	return 0;
}

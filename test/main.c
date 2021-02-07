// Standard C library
#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
// Dimensions of matrix nXm
#define n 3
#define m 4

// Main function
int main(void){
	// Example Matrix of dim nxm
	double matrix[n][m] = { {1, 2, 3, 4},
                    {2, 3, 4, 1},
                    {3, 4, 1, 2}};
	// Output matrix of dim mxn
	double output[m][n];
	int i = 0;
	int j =0;

	// Calling trans function
	trans((double *)matrix, (double *)output, n, m);

	// Printing transpose Matrix
	printf("Transpose Matrix: \n");
	printf("---------------------------------\n");
	for(i = 0; i < m; ++i){
		for(j = 0; j < n; ++j){
			printf("%f  ", output[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------\n");

	return 0;
}



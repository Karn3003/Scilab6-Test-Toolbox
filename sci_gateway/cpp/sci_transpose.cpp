// Copyright (C) 2021 - Karn Tiwari
// Author: Karn Tiwari
// Organization: National Institute of Technology Karnataka
// Email: karntiwari3003@gmail.com
extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "trans.h"


static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	int i = 0;
	int j = 0;
   	int row1 = 0;
    	int col1 = 0;
    	int size1 = 0;
    	double* in1 = NULL;
    	double* out1 = NULL;
 	int row2 = 0;
    	int col2 = 0;

	if (nin != 1){
        	Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        	return 1;
    	}
	if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isComplex(env, in[0]) == 1){
        	Scierror(999, _("%s: Wrong type for input argument #%d: A scalar matrix is expected.\n"), fname, 1);
        	return 1;
    	}
	if (nout != 1){
        	Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        	return 1;
    	}

	size1 = scilab_getDim2d(env, in[0], &row1, &col1);
	row2 = col1;
	col2 = row1;
	scilab_getDoubleArray(env, in[0], &in1);                  //Getting the input matrix
	out[0] = scilab_createDoubleMatrix2d(env, row2, col2, 0); // Transpose Output matrix
	scilab_getDoubleArray(env, out[0], &out1);

	//for(i = 0; i < row1; ++i){
	//	for(j = 0; j < col1; ++j){
	//		out1[j*row1 + i] = in1[i*col1 + j];
	//	}
	//}
	trans(in1, out1, row1, col1);
    	return 0;
}
}

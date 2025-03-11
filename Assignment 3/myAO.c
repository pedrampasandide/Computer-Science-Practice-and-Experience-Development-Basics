// The purpose of this file is to implement primary functions which are directly related to arithmetic operations library
// CODE: Include necessary libraries


double** allocateMatrix(int rows, int cols) {
    // CODE: allocate the memory of a matrix with rows*cols size
    // Make sure you program handle potential errors
    // For example, if the memory allocation fails in the middle of way, you must deallocate what was allocated so far before exit(1)
    
    return matrix; // matrix is a pointer to pointer (2D array). 
}

void freeMatrix(double **matrix, int rows) {
    // CODE: free the memory for a given matrix
}


double** addMatrices(double **A, double **B, int nA, int mA, int nB, int mB) {
    if (nA != nB || mA != mB) {
        printf("Error: Matrix addition requires same dimensions.\n");
        return NULL;
    }

    double **C = allocateMatrix(nA, mA);
    for (int i = 0; i < nA; i++)
        for (int j = 0; j < mA; j++)
            C[i][j] = A[i][j] + B[i][j];

    return C;
}

double** subtractMatrices(double **A, double **B, int nA, int mA, int nB, int mB) {
    
    // CODE: Implement the subtaction logic
}


// CODE: Implement multiplicationMatrices() function

// CODE: Implement transposeMatrices() function

// CODE: Implement SolveAxB() function
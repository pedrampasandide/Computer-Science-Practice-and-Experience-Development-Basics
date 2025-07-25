/* The purpose of this source code is implement functions that are NOT directly related to arithmetic operation library.
The functions implemented here and declared in utility.h are used only for our test cases.
For example, fillRandom() is used to randomly initialize inputs A and B. However, usually the A and B are given by program or user */
// CODE: Include necessary libraries



void fillRandom(double **matrix, int rows, int cols) {
    // NOTE: if you are testing you might want to generate random numbers that are reproducible
    // For example with srand(42) and Using 42 (or any fixed number) ensures repeatable results
    srand(time(NULL));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = (rand() % 21) - 10; // Generates values from -10 to +10
}

void printMatrix(double **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%6.2f ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}


// CODE: implement more utility functions here if you need more
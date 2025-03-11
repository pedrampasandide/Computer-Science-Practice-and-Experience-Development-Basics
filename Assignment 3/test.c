// CODE: Include necessary libraries

int main(int argc, char *argv[]) {

    // CODE: A. Check the inputs and based given operation
    //          0. print error and exit if inputs are invalid
    //          1. save the inputs
    //          2. allocate the memory, for A & B or just A, using allocateMatrix()
    //          Note: if operator is 'T' then it is just A
    //          3. initialize the matrix(ces) using fillRandom()
    //          4. print matrix(ces)
    
    char op = argv[1][0];
    
    // CODE: B. call the corresponding function based on given Operation (`Op`), such as
    double **result = NULL; // the memory allocation will happen within functions
    if (op == '+') {
        // size of A = nA*mA (nA: number of rows, mA: number of columns)
        // size of B = nB*mB 
        result = addMatrices(A, B, nA, mA, nB, mB);
    } else if (op == '-') {
    //          0. here call subtractMatrices()
    } 
    // CODE: Expand the above if statement for:
    //          1. multiplicationMatrices()
    //          2. transposeMatrices()
    //          3. SolveAxB()


    // CODE: C. depending on `print_flag` and `op` print matrices

    // CODE: D. deallocate the memory
    return 0;
}

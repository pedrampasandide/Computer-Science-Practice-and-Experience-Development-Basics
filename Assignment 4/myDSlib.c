// CODE 1: Include necessary library(ies)

// -----------------
Record* table = NULL; // DO NOT CHANGE: A global pointer to save the read data from csv files (a pointer to array of Records)
size_t table_size = 0;// DO NOT CHANGE: A global variable showing the number of rows (number of Records) read from csv files (rows in table)
// -----------------

// CODE 2: ADD more global variables if you need

// CODE 3: Implement all the functions here

unsigned int hash_string(const char* str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;  // hash * 33 + c

    return (unsigned int)(hash % INDEX_SIZE);
}


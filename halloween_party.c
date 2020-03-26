/*
 * Key Idea:
 *	Maximum number of cuts for given k is
 *
 *  ((k/2)^2) if k is even
 *         or
 *   (k/2) * ((k/2)+1) 
 
 * Sample :
 * 	5:
 *	Summation(Number of cuts) 	Product(Number of Pieces) 	
 *			1 + 4					4
 *			2 + 3					6
 *			3 + 2					6
 *			4 + 1					5
 *
 * Result is (2,3)	
 */


#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the halloweenParty function below.
 */
unsigned long halloweenParty(unsigned long k) {
    /*
     * Write your code here.
     */
     unsigned long result = 0, half = 0;
     half = k / 2;
     if((k%2) == 0) {
         result = pow(half,2);
     } else {
         result = half * (half + 1);
     }
     return result;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char* k_endptr;
        char* k_str = readline();
        int k = strtol(k_str, &k_endptr, 10);

        if (k_endptr == k_str || *k_endptr != '\0') { exit(EXIT_FAILURE); }

        unsigned long result = halloweenParty(k);

        fprintf(fptr, "%lu\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}


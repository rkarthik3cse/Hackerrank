/*
 * Key Idea:
 * n	n^2   (n-1)		((n-1)^2)   ((n^2) - ((n-1)^2))
 * 1     1      0          0                 1
 * 2     4      1          1                 3
 * 3     9      2          4                 5  
 * 4     16     3          9                 7
 * 5     25     4          16                9
 *
 * Required result is the sum of odd numbers upto (2n-1)
 *
 * Sample:
 * 1+3+5+7+9 = (1+2+3+4+5+6+7+8+9+10) - (2+4+6+8+10)
 *           = (1+2+3+4+5+6+7+8+9+10) - 2(1+2+3+4+5)
 *
 *
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
 * Complete the summingSeries function below.
 */
unsigned long summingSeries(unsigned long n) {
    /*
     * Write your code here.
     */
     unsigned long m = 0, result = 0;
     m = 2 * n;
     printf("%lu\t%lu\n",n,m);
     result = (((m * (m + 1)) / 2) - (n * (n + 1)));
     result %= 1000000007;
     printf("%lu\n",result);
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
        char* n_endptr;
        char* n_str = readline();
        long n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        unsigned long result = summingSeries(n);

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







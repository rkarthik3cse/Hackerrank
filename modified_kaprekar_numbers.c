#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
 
  long long i, j, square_copy, square, sq_count, i_count, l, r, k, flag = 0;
    

    for(i=p; i<=q ; i++) {
        j = i;
        l = 0;
        r = 0;
        sq_count = 0;
        i_count = 0;
        while(j) {
            j /= 10;            
            i_count++;
        }
        k = i_count;
        //printf("i:%d\n",i);
        square = i * i;    
        //printf("Square : %d\n",square);    
        square_copy = square;

        while(square_copy) {
            square_copy /= 10;
            sq_count++;
        }
        //printf("Square Count : %d\n",sq_count);
        
            l = square;
            while(k) {
                l /= 10;
                k--;
            }
            r = square - (l * pow(10,i_count));
            //printf("L:%d\tR:%d\n",l,r);
            //printf("l+r:%d\n",l+r);
            if((l+r) == i) {
                printf("%lld ",i);
                flag = 1;
            }                    
    }

    if(flag == 0) {
        printf("INVALID RANGE\n");
    }
}

int main()
{
    char* p_endptr;
    char* p_str = readline();
    int p = strtol(p_str, &p_endptr, 10);

    if (p_endptr == p_str || *p_endptr != '\0') { exit(EXIT_FAILURE); }

    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    kaprekarNumbers(p, q);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!line) {
            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);
    } else {
        data = realloc(data, data_length + 1);

        data[data_length] = '\0';
    }

    return data;
}


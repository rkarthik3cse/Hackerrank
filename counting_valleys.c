#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

struct Node {
    char step;
    struct Node *next;
};

void push(struct Node** tail, char step) {
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    struct Node* last = *tail;
    
    temp->step = step;
    temp->next = NULL;
    
    if(*tail == NULL) {
        *tail = temp;
        return;
    }
    
    while(last->next != NULL)
        last = last->next;
    
    last->next = temp;
}

int isEmpty(struct Node** tail) {
    if(*tail == NULL) {
        printf("Stack is Empty\n");
        return 1;
    } 
    return 0;
}   

char top(struct Node** tail) {
    struct Node* temp = *tail;
    
    while(temp->next != NULL) {
        temp=temp->next;
    }

    return temp->step;
}

void pop(struct Node** tail) {
    if(isEmpty(tail) == 1) {
        return;
    }
    
    struct Node* temp = *tail;
    
    if(temp->next == NULL) {
        *tail = NULL;
        return;
    }
    
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    
    temp->next = NULL;
}


void printStack(struct Node** tail) {
    struct Node* temp = *tail;
   
    while(temp!=NULL){
        printf("%c",temp->step);
        temp = temp->next;
    }
    printf("\n");
}


/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, char* path) {
    struct Node *tail = (struct Node*) malloc (sizeof(struct Node));
    tail = NULL;
    int i = 0, len = 0, count = 0;
    len = steps;

    for(i=0;i<len;i++) {
        if(isEmpty(&tail) == 1) {
            push(&tail,path[i]);
            //printStack(&tail);
            continue;
        }
        if(top(&tail) == path[i]) {
            push(&tail,path[i]);
            //printStack(&tail);
        } else {
            pop(&tail);
            //printStack(&tail);
            if((isEmpty(&tail) == 1) && path[i] == 'U') {
                count++;
            }    
        }
    }
    return count;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int steps = parse_int(ltrim(rtrim(readline())));

    char* path = readline();

    int result = countingValleys(steps, path);

    fprintf(fptr, "%d\n", result);

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

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lowestTriangle(int base, int area){

    int result = 0;
    int twice = 2 * area;
    float height = (ceil)(twice / (float)base);
    //printf("Height : %f",height);
    result = (int)height;
    return result;
    // Complete this function
}

int main() {
    int base; 
    int area; 
    scanf("%d %d", &base, &area);
    int height = lowestTriangle(base, area);
    printf("%d\n", height);
    return 0;
}



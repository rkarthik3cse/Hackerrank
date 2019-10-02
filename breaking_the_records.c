#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n=0,i=0,more=0,less=0,more_count=0,less_count=0; 
    scanf("%d",&n);
    int score[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);        
    }
    less=score[0];
    more=score[0];
    for(i=1;i<n;i++)
    {
        if(score[i]<less)
        {
            less = score[i];
            less_count++;
        }
        if(score[i]>more)
        {
            more = score[i];
            more_count++;
        }
    }
    printf("%d\t%d",more_count,less_count);
    
    
    return 0;
}

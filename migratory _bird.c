#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n=0,i=0; 
    scanf("%d",&n);
    int flock[n],max=0,result=0;
    int count[6] = {0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&flock[i]);        
    }    
    for(i=0;i<n;i++)
    {
        count[flock[i]]++;
    }
    result=1;
    max=count[1];
    for(i=2;i<6;i++)
    {
        if(count[i]>max)
        {
            max=count[i];   
            result = i;
        }
    }        
    printf("%d\n",result);
    return 0;
}


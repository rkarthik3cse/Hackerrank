#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    
    int i=0 , j=0 , n=0 , max=1, dummy=0 , count=0 , remainder[32]={0}; 
    scanf("%d",&n);
    
    while(1)
    {        
        dummy = n % 2;
        remainder[i] = dummy;
        n = n / 2;
        i++;
        if(n == 1)
        {
            remainder[i] = 1;
            break;
        }
    }
    
    for(j = 0;j <= i; j++)
    {        
        if(remainder[j] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count > max)
        {
            max = count;
        }
    }
    
    printf("%d\n",max);
    return 0;
}




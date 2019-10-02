#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int i = 0 , j = 0 , n = 0 , k = 0 , result = 0;
    scanf("%d",&n);
    n++;
    int a[n];
    
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j] == i)
            {
                k = j;
                break;
            }
        }
        for(j=1;j<n;j++)
        {
            if(a[j] == k)
            {
                printf("%d\n",j);
                break;
            }
        }
    }        
    return 0;
}


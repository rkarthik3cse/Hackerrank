#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int i = 0 , n = 0; 
    scanf("%d", &n);
    int a[n];
    int flag[101] = {0};
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        flag[a[i]] +=1;
    }
    
    if(n==1)
    {
        printf("%d\n",a[0]);
    }
    else
    {
        for(i=0;i<101;i++)
        {
            if(flag[i] == 1)
            {
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i=0,n=0,count[101]={0}; 
    scanf("%d",&n);    
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    
    if(n == 1)
    {
        printf("%d\n",a[0]);        
        exit(0);
    }
    
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }    
    for(i=1;i<=100;i++)
    {
        if(count[i] == 1)
        {
            printf("%d\n",i);
            exit(0);
        }
    }
        
    return 0;
}


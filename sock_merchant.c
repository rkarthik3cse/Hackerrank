#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i=0,count[101]={0},result=0; 
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }            
    
    for(i=1;i<101;i++)
    {
        if(count[i]>1)
        {            
            result+=count[i]/2;
        }            
    }
    printf("%d\n",result);
    return 0;    
}

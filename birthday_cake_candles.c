#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i=0,j=0,max=0,result=1; 
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=1;i<n;i++)
    {        
        if(max==a[i])
        {
            result++;
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d\n",result);
    
    return 0;
}

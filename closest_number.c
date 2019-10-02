#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main() 
{
    int n=0,i=0;
    scanf("%d",&n);
    int a[n] , min_diff=0,init=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    qsort(a, n, sizeof(int), cmpfunc);
   
    min_diff = abs(a[0] - a[1]);
    
    for(i=1;i<n-1;i++)
    {
        init = abs(a[i] - a[i+1]);
        if(init<min_diff)
        {
            min_diff = init;
        }        
    }
    
    
    //printf("Min_Diff----------->  %d\n",min_diff);
    for(i=0;i<n-1;i++)
    {
        init = abs(a[i] - a[i+1]);
        if(init==min_diff)
        {
            printf("%d %d ",a[i],a[i+1]);
        }        
    }
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() 
{
    int d = 0 , m = 0 ,n = 0 , i = 0 , j = 0 , sum = 0 , diff = 0 , count = 0; 
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    scanf("%d%d",&d,&m);
    diff = n - m;
    for(i=0;i<=diff;i++)
    {	
    	sum = 0;
    	for(j=i;j<(i+m);j++)
    	{
    		sum += a[j];
    	}
    	if(sum == d)
    	{
		count++;
	}
    }
    printf("%d\n",count);
    return 0;
}





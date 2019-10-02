#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n = 0 , i = 0 , j = 0 , k = 0 , count[100] = {0} , result = 0;
    scanf("%d",&n);
    int a[n],b[n];
    char s[n][10];

    for(i=0;i<n;i++)
    {
        scanf("%d%s",&a[i],s[i]);
    }	
    
    for(i=0;i<n;i++)
    {
	count[a[i]]++;
    }	
            
    result = count[0];	
    for(i=0;i<100;)
    {
    	printf("%d ",result);
    	i++;
    	result += count[i];
    }

    return 0;
}


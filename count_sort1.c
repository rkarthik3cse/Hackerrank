#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i = 0 , n = 0 , count[100] = {0};
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
    for(i=0;i<100;i++)
    {
        printf("%d\t",count[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


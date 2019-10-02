#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i=0 , n=0 , count[101]={0} , max=0 ,result =0;
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
    max = count[1];
    for(i=2;i<n;i++)
    {
        if(count[a[i]]>max)
        {
            max = count [a[i]];
        }
    }
    result = n - max;
    printf("%d\n",result);
    
    return 0;
}

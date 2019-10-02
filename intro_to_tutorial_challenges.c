#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int key=0,n=0,i=0;
    scanf("%d%d",&key,&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d\n",i);
        }
    }
    
    
    return 0;
}

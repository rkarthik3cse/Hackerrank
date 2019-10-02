#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n=0,i=0,j=0,temp=0;
    long long miles = 0;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);    
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(c[j]<c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        miles+=(pow(2,i)*c[i]);
        //printf("%d\n",c[i]);
    }
    printf("%lld\n",miles);
    
    return 0;
}

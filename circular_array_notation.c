#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long n=0,i=0,k=0,q=0,mod=0,dummy=0,zero_position=0;    
    scanf("%lld %lld %lld",&n,&k,&q);
    
    long long a[n];
    long long m[q];
    
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    
    
    for(i=0;i<q;i++)
    {
        scanf("%lld",&m[i]);
    }
    mod = k % n;
    if((mod) == 0)
    {        
        for(i=0;i<q;i++)
        {
            printf("%lld\n",a[m[i]]);
        }    
    }
    else
    {    
        if(k > n)
        {
            k = mod;    
        }
        
        zero_position = k;
            
        for(i=0;i<q;i++)
        {
            if(m[i] < zero_position)
            {
                dummy = n - k + m[i];
                printf("%lld\n",a[dummy]);            
            }
            else
            {
                dummy = m[i] - zero_position;
                printf("%lld\n",a[dummy]);
            }
        }
    }
    return 0;
}


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    
    int apple[m],orange[n],i=0,r_a=0,r_o=0,dummy=0;
    
    for(i=0;i<m;i++)
    {
       scanf("%d",&apple[i]);
    }
    
    for(i=0;i<n;i++)
    {
       scanf("%d",&orange[i]);
    }
    
    for(i=0;i<m;i++)
    {
        if(apple[i]<=0)
        {
            continue;
        }
        else
        {
            dummy = a+apple[i];
            if(dummy>=s&&dummy<=t)
            {
                r_a++;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(orange[i]>=0)
        {
            continue;
        }
        else
        {
            dummy = b+orange[i];
            if(dummy>=s&&dummy<=t)
            {
                r_o++;
            }
        }
    }
    printf("%d\n%d",r_a,r_o);
    return 0;
}






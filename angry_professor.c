#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i = 0 , j = 0 , n_t = 0 , n_c = 0 , p_c = 0 ; 
    scanf("%d",&n_t);
    int n , k;

    for(i=0;i<n_t;i++)
    {
        scanf("%d%d",&n,&k);
        int arrival[n];
        n_c = 0;
        p_c = 0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&arrival[j]);
            if(arrival[j]>0)
            {
                p_c++;
            }
            else
            {
                n_c++;
            }
        }        
        if(n_c>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    
    return 0;
}


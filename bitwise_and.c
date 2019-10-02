#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n_t = 0 , i = 0 , j = 0 , m = 0 , number = 0 , result = 0; 
    scanf("%d",&n_t);
    int n[n_t],k[n_t];
    int nn= 0 , kk = 0;
    for(i=0;i<n_t;i++)
    {
        scanf("%d%d",&n[i],&k[i]);
    }
    for(i=0;i<n_t;i++)
    {
    	number = 0;
    	result = 0;
        nn = n[i];
        kk = k[i];
        for(m=1;m<nn;m++)
        {
            for(j=m+1;j<=nn;j++)
            {
                number = (m & j);
//                printf("%d\t%d\t%d\n",m,j,number);
                if(number < kk)
                {
                    if(number > result)
                    {
                        result = number; 
                    }
                }        
            }            
        }
        printf("%d\n",result);
    }
    return 0;
}


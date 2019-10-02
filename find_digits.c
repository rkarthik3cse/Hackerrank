#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n_t=0,i=0,number=0,dummy=0,result=0; 
    scanf("%d",&n_t);
    int n[n_t];
    
    for(i = 0; i < n_t; i++)
    {        
        scanf("%d",&n[i]);
    }
    
    for(i=0;i<n_t;i++)
    {
        number =  n[i];
        result = 0;
        while(1)
        {
            dummy = number % 10;
            number = number /10;            
            if(dummy == 0)
            {
                continue;
            }
            if(n[i] % dummy==0)
            {
                result++;                
            }
            if(number==0)
            {
                break;
            }
        }
        printf("%d\n",result);
    }
    
    return 0;
}


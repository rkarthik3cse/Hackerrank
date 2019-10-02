#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int x1=0; 
    long long v1=0; 
    int x2=0; 
    long long v2=0,flag = 0; 
    long long first = 0, second = 0, i = 0;
    scanf("%d %lld %d %lld",&x1,&v1,&x2,&v2);
    
    if(v2>=v1)
    {
        printf("NO\n");
        exit(0);
    }
	    
    first = x1+v1;
    second = x2+v2;        
	
    if(first == second)
    {
    	printf("YES\n");
        flag = 1;            
	exit(0);
    }
    while(first<=second)
    {
        first +=v1;
        second +=v2;     
        if(first == second)
        {
            printf("YES\n");
            flag = 1;            
            break;
        }
    }
    if(flag==0)
    {        
        printf("NO\n");
    }
    
    return 0;
}







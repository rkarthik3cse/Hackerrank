#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long  t = 0 , init = 3 , dual = 0 , next = 3 , result = 0;
    int dummy = 0 , i = 0; 
    scanf("%lld",&t);
    
    if(t<=3)
    {
        dummy = 4 - t;
        printf("%d\n",dummy);
        exit(0);
    }
    while(1)
    {
        dual = init * 2;
        next = next + dual;
        init = dual;
        if( t <= next)
        {
            result = next - t + 1;
            printf("%lld\n",result);
            break;
        }
    }    
    return 0;
}


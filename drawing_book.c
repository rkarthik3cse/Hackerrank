#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n=0,p=0,result=0; 
    scanf("%d%d",&n,&p);
    int even=0;
    if((n%2)==0)
    {
        even = 1;   
    }
    if((n==p)||(p==1))
    {
        printf("0");        
    }
    else
    if((even==1)&&((n-p)==1))
    {
        printf("1");
    }
    else
    if((even==0)&&((n-p)==1))
    {
        printf("0");
    }
    else
    if((n-p)>(p-1))
    {
        if(even==1)
            result = ((p)/2);
        else
            result = ((p)/2);
        printf("%d\n",result);
    }
    else
    if(((n-p)<=(p-1)))
    {
        if(even==1)
            result = ((n-p)/2);
        else
            result = ((n-p)/2);
        printf("%d\n",result);
    }  
    /*else
    if((n-p)==(p-1))
    {
        result = n-p
    }*/
    return 0;
}

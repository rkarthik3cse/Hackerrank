#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n=0 , k=0 , i=0,charged=0,actual=0,refund=0;
    scanf("%d%d",&n,&k);
    int cost[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&cost[i]);
    }
    
    scanf("%d",&charged);
    
    for(i=0;i<n;i++)
    {
        if(i!=k)
        {
            actual+=cost[i];
        }
    }
    actual/=2;
    refund = charged - actual;
    if(refund==0)
    {
        printf("Bon Appetit\n");        
    }
    else
    {
        printf("%d\n",refund);
    }           
    return 0;
}

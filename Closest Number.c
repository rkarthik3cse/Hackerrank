#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a=0,b=0,x=0,i=0,n_tc=0,num=0,rem=0,y=0,z=0;
    scanf("%d",&n_tc);
    
    for(i=0;i<n_tc;i++)
    {
        scanf("%d%d%d",&a,&b,&x);        
        num = pow(a,b);
        
        if(a==1)
        {
            printf("1\n");
            continue;
        }
        if(b<0)
        {
            printf("0\n");
            continue;
        }             
        
        else
        {   
            rem = num % x;
        }        
        y = x / 2;
        z=x-rem;
        if(z<=y)
        {
            num = num + z;
            printf("%d\n",num);
        }
        else
        {
            num = num - rem;
            printf("%d\n",num);
        }
    }
    return 0;
}










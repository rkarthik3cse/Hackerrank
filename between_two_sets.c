#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n=0,m=0,i=0,min=0,max=0,j=0,k=0,result=0,flag1=0,flag2=0;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    
    min=b[0];
    for(i=1;i<m;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }
    
    for(k=1;k<=min;k++)
    {
        for(i=0;i<n;i++)
        {
           if(k%a[i]!=0)
           {
               flag1=1;
               break;
           }
        }
        
        for(i=0;i<m;i++)
        {
           if(b[i]%k!=0)
           {
               flag2=1;
               break;
           }
        }
        
        if(flag1==0&&flag2==0)
        {
            result++;
        }
        flag1=0;
        flag2=0;
    }
    printf("%d\n",result);
    return 0;
}

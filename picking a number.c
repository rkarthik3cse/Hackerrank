#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n=0,i=0,j=0,temp=0,dummy=0,result=0,max=0,maximum=0,flag=0;
    int count[100]={0};
    scanf("%d",&n);
    int a[n],b[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        count[a[i]]+=1;        
    }      
    maximum = count[0];
    for(i=1;i<100;i++)
    {
        if(count[i] > maximum)
        {
            maximum = count[i];
        }
    }       
    j=0;
    for(i=0;i<n;i=i+count[a[i]])
    {
        b[j] = a[i];        
        j++;
    }
    result=1;
    for(i=0;i<j-1;i++)
    {
        dummy = (b[i+1]-b[i]);
        if((dummy == 1))
        {
            flag = 1;
            max = count[b[i]] + count[b[i+1]];
            if(result < max)
            {
                result = max;
            }
        }
    }       
    if(result>maximum)
    {
        printf("%d\n",result);
    }
    else
    {
        printf("%d\n",maximum);
    }
    return 0;
}





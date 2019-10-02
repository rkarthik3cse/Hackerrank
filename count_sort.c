#include <stdio.h>

int main(void) 
{
    int n=0,i=0,j=0,max=0;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    max=a[0];
    
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
    max++;
    int count[max];
    
    for(i=0;i<max;i++)
    {
        count[i]=0;
    }

    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    
    for(i=0;i<max;i++)
    {
        if(count[i]>0)
        {
            for(j=0;j<count[i];j++)
            {
                printf("%d\t",i);
            }
        }
            
    }
    
	return 0;
}


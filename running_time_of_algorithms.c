#include <stdio.h>

int main(void) 
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    int i=0,j=0,temp=0,count=0;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}


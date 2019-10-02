#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i = 0 , j = 0 , k = 0 , l = 2 , m = 0 , dummy = 0 , result = 0 , top[16] = {0} , middle[16] = {0} , bottom[16] = {0} , a[6][6] = {0} , hi=0;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
    
    for(i=0,k=2;i<=3,k<=5;i++,k++)
    {
	for(j=0;j<=2;j++)
        {            
            top[m]    += a[i][j];
            bottom[m] += a[k][j];
        }   
        middle[m] = a[i+1][1];      
        m++;
    }    

    for(i=0,k=2;i<=3,k<=5;i++,k++)
    {
	for(j=1;j<=3;j++)
        {            
            top[m]    += a[i][j];
            bottom[m] += a[k][j];
        }         
        middle[m] = a[i+1][2];
        m++;
    }    
    
    for(i=0,k=2;i<=3,k<=5;i++,k++)
    {
	for(j=2;j<=4;j++)
        {            
            top[m]    += a[i][j];
            bottom[m] += a[k][j];
        }         
        middle[m] = a[i+1][3];
        m++;
    }
    
    for(i=0,k=2;i<=3,k<=5;i++,k++)
    {
	for(j=3;j<=5;j++)
        {            
            top[m]    += a[i][j];
            bottom[m] += a[k][j];
        }         
        middle[m] = a[i+1][4];
        m++;
    }  
    
    result = -75;
    for(i=0;i<16;i++)
    {
 	dummy = top[i] + middle[i] + bottom[i];
 	if(dummy > result)
 	{
 	    result = dummy;
 	}
    }
    
    printf("%d\n",result);            
    return 0;
}

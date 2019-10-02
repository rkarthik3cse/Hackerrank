#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n=0,n_sq=0,iscomposite=0,i=0,l=0,k=0,prime[50]={0},m=0,o=0,rem[20]={0},digit_sum=0,factor_sum=0,result=0;
	scanf("%d",&n);
	n_sq=sqrt(n);

	int a[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 507151, 241, 251, 257, 263, 269, 271, 277, 281, 283, 14723, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 65837};

	for(i=2;i<=n_sq;i++)
	{
		if((n%i) == 0)
		{
			iscomposite = 1;
			break;
		}			
	}	
	
	if(iscomposite)
	{
        m = n;
        
        while(m>=1) 
        {   
            rem[o] = m%10; 
            digit_sum+=rem[o];
            m = m/10;                 
            o++;            
        }            
        
        o = 0;
        while(1)
		{
			while((n % a[l]) == 0)
			{
				n = n / a[l];                                
			    prime[k] = a[l];                                
                while(prime[k]>=1)
                {
                    rem[o] = prime[k] % 10;
                    factor_sum += rem[o];
                    prime[k] = prime [k] / 10;
                    o++;
                }			    
				k++;			                
			}
			l++;
            if(l>=100)
            {
                break;
            }
			if(n == 1)
			{
				break;
			}	
		}
        
        if(digit_sum == factor_sum)
        {
            printf("1");
        }
        else            
        {            
               printf("0");
        }
	}

	else
	{
		printf("0");
	}
    
	return 0;
}










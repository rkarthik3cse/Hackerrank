#include <stdio.h>
#include <math.h>

int calculate_gcd(int,int);

int main() 
{	
	int n_tc=0 , i=0 , j=0 ,is_one=0,gcd=0 , s_index=1;
	int arr_size=0;
    
    scanf("%d",&n_tc);

	for(j=0;j<n_tc;j++)
	{          
		scanf("%d",&arr_size);
        s_index=1;
		int a[100];
	
		for(i=0;i<arr_size;i++)
		{
			scanf("%d",&a[i]);
		}        

        if(arr_size==1 && a[i]>1)
        {
            printf("NO\n");
            continue;
        }
          
        
		for(i=0;i<arr_size;i++)
		{
			if(a[i] == 1)
			{
				printf("YES\n");	
				is_one=1;
				break;
			}
		}		
		if(is_one)
		{
            is_one=0;
			continue;
		}
		else
		{            
                        
			gcd = calculate_gcd(a[0],a[1]);    
            s_index++;
            while(s_index<arr_size)
            {
                gcd = calculate_gcd(gcd,a[s_index]);
                s_index++;
            }           
			if(gcd == 1)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}        
	}
	return 0;
}

int calculate_gcd(int num1,int num2)
{
    int temp=0,rem=0,gcd=0;
    if(num2>num1)
    {
        	temp=num1;
	        num1=num2;
        	num2=temp;
	}
	while(1)
	{
	    rem=num1%num2;
	    if(rem==0)
	    {
	        gcd = num2;
	        break;
	    }
	    num1=num2;
	    num2=rem;
	}
	return gcd;
}



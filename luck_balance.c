#include<stdio.h>
#include<stdlib.h>

void swap(long long* a, long long* b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}
 
long long partition (long long arr[], long long low, long long high)
{
    long long pivot = arr[high];    // pivot
    long long i = (low - 1);  // Index of smaller element
 
    for (long long j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(long long arr[], long long low, long long high)
{
    if (low < high)
    {
        long long pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main()
{
	long long n = 0 , k = 0 , i = 0 , j = 0 , m = 0 , important_contest_count = 0 , sum = 0 , winning_contest_sum = 0 , result = 0;
	scanf("%lld%lld",&n,&k);
	long long a[n][2] , arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&a[i][0],&a[i][1]);
		sum += a[i][0];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i][1] == 1)
		{
			arr[j] = a[i][0];
			j++;
		}
	}
	
	important_contest_count = j;	
	
	//printf("%lld\n",important_contest_count);
	quickSort(arr, 0, j-1);		
	m = j - k;
	//printf("No of Winning Contests : %lld\n",m);
	
	for(i=0;i<m;i++)
	{
		winning_contest_sum += arr[i];
	}
	
	winning_contest_sum *=2;
			
	//printf("%lld\t%lld\n",sum,winning_contest_sum);
		
	result = sum - winning_contest_sum;
	
	printf("%lld\n",result);
	return 0;
}	
				
	
		

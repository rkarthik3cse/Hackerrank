#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

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
    long long n = 0 , i = 0 , min = 0 , result = 0; 
    scanf("%lld",&n);
    long long arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);        
    }
    
    quickSort(arr, 0, n-1);
    
    result = abs((arr[1] - arr[0]));
    
    for(i=2;i<n;i++)
    {
        min = abs(arr[i] - arr[i-1]);
        if(min < result)
        {
            result = min;
        }
    }
    
    printf("%lld",result);
    
    return 0;
}


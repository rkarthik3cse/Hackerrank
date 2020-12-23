#include <stdio.h>

int main()
{
    int arr[6][5] = { 1, 2, 3, 4, 5,
                    6, 7, 8, 9,10,
                    11,12,13,14,15,
                    16,17,18,19,20,
                    21,22,23,24,25,
                    26,27,28,29,30
                  };

    int i = 0, j = 0, m = 6, n = 5, a = 0, count = 0;
    int num = m *n;
    
    while(1) {
        if(count == num) {
            break;
        }
        
        i = a;
        for(j=a;j<=(n-2);j++){
            printf("%d\t",arr[i][j]);
            count++;
        }
        j = n - 1;
        for(i=a;i<=(m-1);i++){
            printf("%d\t",arr[i][j]);
            count++;
        }
        i = m - 1;
        for(j=(n-2);j>=a;j--){
            printf("%d\t",arr[i][j]);
            count++;
        }
        
        j = a;
        for(i=(m-2);i>=(a+1);i--){
            printf("%d\t",arr[i][j]);
            count++;
        }
        a++;
        m--;
        n--;
    }
                        

    return 0;
}



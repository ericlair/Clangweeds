#include <stdio.h>

int main(void)
{  
    int N, v, count=0;
    int arr[100];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);   
    }

    scanf("%d", &v);
    
    for (int i = 0; i < N; i++){
        if (arr[i]==v){
           count++; 
        }
    }

    printf("%d",count);
    
    return 0;
}
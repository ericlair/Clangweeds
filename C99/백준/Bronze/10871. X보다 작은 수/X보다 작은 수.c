#include <stdio.h>

int main(void){
    int N, X;
    int Arr[10000];

    scanf("%d %d", &N, &X);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    for (int i = 0; i < N; i++)
    {
        if (Arr[i] < X){
            printf("%d ",Arr[i]);
        }
        
    }
    

}
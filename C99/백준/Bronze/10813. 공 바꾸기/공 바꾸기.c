#include <stdio.h>

int main(void){
    int N, M;
    int arr[100];
    int tem;
    
    scanf("%d %d", &N, &M);
    
    for (int i = 1; i < N+1; i++){
        arr[i] = i;
    }
    
    int a,b;
    
    for (int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        tem = arr[a];
        arr[a] = arr[b];
        arr[b] = tem;
    }

    for (int i = 1; i < N+1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}


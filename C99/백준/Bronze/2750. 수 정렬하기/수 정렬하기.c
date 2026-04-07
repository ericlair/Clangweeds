#include <stdio.h>

int main(void){
    int N, tem;

    scanf("%d", &N);

    int array[1001] = {0, };
    int up[1001] = {0, };

    for (int i = 0; i < N; i++){
        int put;
        scanf("%d", &put);
        array[i] = put;
    }

    for (int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            if (array[i] > array[j]){
                tem = array[j];
                array[j] = array[i];
                array[i] = tem;
            }
        }
    }

    for (int i = 0; i < N; i++){
        printf("%d\n", array[i]);
    }
    
    return 0;
    
}
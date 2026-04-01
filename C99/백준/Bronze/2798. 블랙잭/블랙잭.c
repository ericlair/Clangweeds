#include <stdio.h>

int main(void){

    int N, M, result = 0;
    int card[100] = {0, };
    
    scanf("%d %d", &N, &M);

    //횟수 count = (M*(M-1)*(M-2))*0.5;

    for (int i = 0; i < N; i++){
        scanf("%d", &card[i]);
    }

    for (int i = 0; i < N-2; i++){
        for (int j = i+1; j < N-1; j++){
            for (int k = j+1; k < N; k++){
                int tem = card[i] + card[j] + card[k];
                if (tem <= M && tem > result){
                    result = tem;
                }
            }
        }
    }

    printf("%d", result);

        return 0;
}




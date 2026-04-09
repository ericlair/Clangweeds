#include <stdio.h>

int main(void){
    int N, k, x;

    scanf("%d %d", &N, &k);

    int score[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
    }
    
    for (int i = 0; i < N-1; i++){
        int tem;
        for (int j = i+1; j < N; j++) { 
            if (score[i] < score[j]) {
                tem = score[j];
                score[j] = score[i];
                score[i] = tem;
            }
        }
    }
    printf("%d", score[k-1]);

    return 0;
    
}
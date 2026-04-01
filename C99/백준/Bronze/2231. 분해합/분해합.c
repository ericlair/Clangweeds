#include <stdio.h>

int main(void){

    int N, M = 0;
    int i = 1;
    int sum = 0;

    scanf("%d", &N);

    while (i < N){
        M = i;
        sum = M;
        while (M > 0){
            sum += M%10;
            M /= 10;
        }
        if (sum == N){
            printf("%d",i);
            return 0;
        }
        sum = 0;
        i++;
    }
    printf("0");

    return 0;
}




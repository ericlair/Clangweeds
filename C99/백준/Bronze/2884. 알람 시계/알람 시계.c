#include <stdio.h>

int main(void){
    int H, M;

    scanf("%d %d", &H, &M);
    int A = H, B = M;
    if (M - 45 < 0){
        if (H == 0){
            A = 23;
        } else{
            A = A - 1;
        } B = M + 15;
    } else{
        B = M - 45;
    }
    printf("%d %d", A, B);
    
}
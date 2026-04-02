#include <stdio.h>

int main(void){
    int test;
    int A, B;

    scanf("%d", &test);
    
    for (int i = 0; i < test; i++){
        scanf("%d %d", &A, &B);
        int C = A + B;
        printf("Case #%d: %d + %d = %d\n", i+1, A, B, C);
    }

    return 0;
}
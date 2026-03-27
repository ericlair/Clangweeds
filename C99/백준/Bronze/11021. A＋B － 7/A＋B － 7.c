#include <stdio.h>

int main(void){
    int A,B,T;

    scanf("%d", &T);
    
    int i = 0;
    while (i < T){
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i+1, A+B);
        i++;
    }

    return 0;
}


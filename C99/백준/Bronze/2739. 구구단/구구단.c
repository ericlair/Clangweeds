#include <stdio.h>

int main(void){

    int N, i = 1;
    scanf("%d", &N);

    while (i <= 9)
    {
        printf("%d * %d = %d\n", N, i, N*i);
        i++;
    }
    
    
    return 0;
}
#include <stdio.h>

int main(void){

    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        for (int j = N-i; j > 0; j--)
        {
            printf(" ");
        }
        for (int y = 0; y < i*2-1; y++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = N-1; i > 0; i--)
    {
        for (int x = i; x < N; x++)
        {
            printf(" ");
        }
        for (int y = 0; y < i*2-1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
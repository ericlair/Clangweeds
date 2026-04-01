#include <stdio.h>

int main(void){
    int N;

    scanf("%d",&N);

    for (int i = 1; i < N+1; i++)
    {
        for (int x = 1; x <= i; x++)
        {
             printf("*");
        }
        printf("\n");
    }

    return 0;
}
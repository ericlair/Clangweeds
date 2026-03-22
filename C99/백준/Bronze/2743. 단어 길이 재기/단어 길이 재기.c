#include <stdio.h>

int main(void){
    char S[100];
    int i=0;

    scanf("%s", S);

    while (S[i] != 0)
    {
        i++;
    }

    printf("%d", i);
}
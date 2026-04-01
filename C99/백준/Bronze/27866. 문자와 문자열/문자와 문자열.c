#include <stdio.h>

int main(void){
    char S[1000];
    int i;

    scanf("%s\n%d", S, &i);

    printf("%c", S[i-1]);

        return 0;
}

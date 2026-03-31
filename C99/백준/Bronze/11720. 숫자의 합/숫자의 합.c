#include <stdio.h>

int main(void){
    int N; 
    char c;
    int sum = 0;

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++){
        scanf("%c", &c);
        sum += (c - 48);
    }
    
    printf("%d", sum);

    return 0;
}




#include <stdio.h>

int main(void){
    int A, B, Test;

    scanf("%d", &Test);
    
    for (int i = 0; i < Test; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    

}
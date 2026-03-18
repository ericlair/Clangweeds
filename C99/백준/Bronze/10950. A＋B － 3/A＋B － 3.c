#include <stdio.h>

int main(void){
    int A, B, Test;
    int i = 0;

    scanf("%d", &Test);
    
    while (i < Test)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
        i++;
    }
    

}
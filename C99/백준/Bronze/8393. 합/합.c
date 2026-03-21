#include <stdio.h>

int main(void){
    int n, count = 0;

    scanf("%d",&n);

    for (int i = 1; i < n+1; i++)
    {
        count = count + i;
    }
    printf("%d", count);
}
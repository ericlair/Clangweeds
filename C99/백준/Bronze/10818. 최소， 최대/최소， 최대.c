#include <stdio.h>

int arr[1000000];

int main(void){
    int N;

    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (int a = 0; a < N; a++)
    {
        if (arr[a] < min){
        min = arr[a];
        }
        if (arr[a] > max){
        max = arr[a];
        }
    }

    printf("%d %d", min, max);

    return 0;
}
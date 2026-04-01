#include <stdio.h>

int main(void){
    int basket, num;
    int arr[101] = {0, };
    int i, j, k;

    scanf("%d %d", &basket, &num);

    for (int x = 0; x < num; x++){
        scanf("%d %d %d", &i, &j, &k);
        
        for (int y = i; y <= j; y++) arr[y] = k;
    }
    for (int x = 1; x <= basket; x++)
    {         
        printf("%d ", arr[x]);
    }


    return 0;
    
}




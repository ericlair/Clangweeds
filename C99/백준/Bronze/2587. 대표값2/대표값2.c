#include <stdio.h>

int main(void){
    int avg, tem=0;
    int arr[5]={0, };

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        tem += arr[i];
    }

    
    avg = tem/5;

    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++){
            if (arr[i] > arr[j]){
                tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;

            }
        }
    }

    
    printf("%d\n%d", avg, arr[2]);


}
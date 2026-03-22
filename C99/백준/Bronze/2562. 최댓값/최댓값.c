#include <stdio.h>

int main(void){

    int arr[9]; 
    arr[0] = 0;
    int max = 0, address;

    for (int i = 0; i < 9; i++)
    {   
        scanf("%d", &arr[i]);

            if (arr[i] > max)
        {
            max = arr[i];
            address = i + 1;    
        }
    }
    printf("%d\n%d", max, address);
    
    return 0;
}

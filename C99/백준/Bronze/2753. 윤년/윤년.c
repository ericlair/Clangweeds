#include <stdio.h>

int main(void){
    
    int Year, n;
    scanf("%d", &Year);

    if(Year%4 == 0 && Year%100 != 0 || Year%400 == 0){
        printf("1");
    }
    else{
        printf("0");
    }
}
#include <stdio.h>

int main(void){
    int d_1, d_2, d_3, price = 0;

    scanf("%d %d %d", &d_1, &d_2, &d_3);

    if (d_1 == d_2 && d_2 == d_3){
        price = 10000 + (d_1*1000);
    } else if (d_1 == d_2 || d_1 == d_3){
        price = 1000 + (d_1*100);  
    } else if (d_2 == d_3){
        price = 1000 + (d_2*100); 
    } else {
        if (d_1 > d_2 && d_1 > d_3){
            price = d_1*100;
        } else if (d_2 > d_3){
            price = d_2*100;
        } else{
            price = d_3*100;
        }
    }

    printf("%d", price);
    
    return 0;
}

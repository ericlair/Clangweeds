#include <stdio.h>

int main(void){

    int king, queen, bishop, rook, knight, pawn;
    int a, b, c;

    scanf("%d %d %d %d %d %d", &king, &queen, &bishop, &rook, &knight, &pawn);
    
    for (int i = 1; i > -10 ; i--){
        if (king + i == 1){
            a = i;
        }
        if (queen + i == 1){
            b = i;
        }
    }
    printf("%d %d ", a, b);    
        


    for (int i = 2; i >= -8 ; i--){
        if (bishop + i == 2){
            a = i;
        }
        if (rook + i == 2){
            b = i;
        }
        if (knight + i == 2){
            c = i;
        }
    }
        
    printf("%d %d %d ", a, b, c);   

    
    for (int i = 8; i >= -2 ; i--){
        if (pawn + i == 8){
            a = i;
        }
    }
    
    printf("%d", a);  
    

}
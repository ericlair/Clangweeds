#include <stdio.h>

int main(void){
    char arr[5][15] = {0, };
    int j = 0;

    for (int i = 0; i < 5; i++){
            scanf("%s", &arr[i]);
        }

    for (int j = 0; j < 15; j++){
        for (int i = 0; i < 5; i++){
            if (arr[i][j] != 0 || arr[i][j] != '\0'){   ////0은 0, '\0'은 문자열 null 둘다 뭘 써도 결과 같음
                printf("%c",arr[i][j]);            
            }
        }
    }
    
    
}


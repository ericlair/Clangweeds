#include <stdio.h>
#include <string.h>

int main(void){
    
    int Alpha[26] = {0, };
    char S[101] = {0, };
    int asc = 0;
    
    scanf("%s", S);

    for (int i = 0; i <= 25; i++) {
        Alpha[i] = -1;
    }

    for (int i = 0; i < strlen(S); i++) {
        asc = S[i] - 'a';
        if (Alpha[asc] == -1) {      
            Alpha[asc] = i;
        }
    }

    for (int i = 0; i <= 25; i++) {
        printf("%d ", Alpha[i]);
    }

    return 0;
    
}



#include <stdio.h>
#include <string.h>


int main(void){
    char S[20], P[200];
    int R, T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        memset(P, 0, sizeof(P));
        scanf("%d %s", &R, S);
        
        for (int j = 0; j < strlen(S); j++) {
            for (int k = j*R; k < (j*R + R); k++) {
                P[k] = S[j];
            }
        }

        for (int q = 0; q < (strlen(S) * R); q++) {
            printf("%c", P[q]);
        }
        printf("\n");
    }



    return 0;

}
#include <stdio.h>

int main(void){
    char S[1000];
    int T;

    scanf("%d", &T);

    for (int i=0; i < T; i++)
    {
        scanf("%s", S);
        
        int x = 0;
        while (S[x] != 0)
        {
            x++;
        }
        printf("%c%c\n", S[0],S[x-1]);
    }
    
    return 0;
}
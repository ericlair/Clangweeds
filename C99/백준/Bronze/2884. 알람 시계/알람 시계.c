#include <stdio.h>

int main(void){ 

    int H, M;
    
    scanf("%d %d", &H, &M);

    int T = (H*60) + M;

    if (T == 0) printf("23 15");
    else if(T < 45) printf("23 %d", T + 15);
    else if(T%60 <45) printf("%d %d",T/60 - 1, T%60 + 15);
    else printf("%d %d", T/60, T%60 - 45);

    return 0;

}
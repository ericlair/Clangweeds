#include <stdio.h>

int main(void) {
    int N, i = 1;
    scanf("%d", &N);

    while (i <= N) {
        printf("%d\n", i++); // 출력 후 i를 1 증가시킴
    }

    return 0;
}

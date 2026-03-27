#include <stdio.h>

int main(void){
    int max[9][9] = {0, };

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &max[i][j]);
        }

    }

    int result = -1;
    int max_low = 0, max_col = 0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++)
        {
            if (max[i][j] >= result) {
               result = max[i][j];
               max_low = i+1;
               max_col = j+1;
            }   
        }
    }

    printf("%d\n", result);
    printf("%d %d", max_low, max_col);

    return 0;
}


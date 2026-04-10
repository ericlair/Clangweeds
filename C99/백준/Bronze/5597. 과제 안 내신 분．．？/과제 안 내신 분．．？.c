#include <stdio.h>

int main(void){
    int n;
    int stud[30];


    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        stud[i] = n;
    }

    for (int i = 0; i < 27; i++) {
        int tem;
        for (int j = i+1; j < 28; j++) {
            if (stud[i] > stud[j]) {
                tem = stud[i];
                stud[i] = stud[j];
                stud[j] = tem;
            }
        }
    }

    int k = 0;

    for (int i = 1; i <= 30; i++) {
        if (k<28 &&stud[k] == i) {
            k++;
        }
        else {
            printf("%d\n", i);
        }
    } 
    
    return 0;
    
    
}
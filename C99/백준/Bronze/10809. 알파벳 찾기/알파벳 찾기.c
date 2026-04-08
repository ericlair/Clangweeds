#include <stdio.h>

int main(void){
    int Alpha[26];
    char word[101];

    for(int i = 0; i <= 25; i++){
        Alpha[i] = i+97; 
    }

    scanf("%s", word);

    int len = 0;
    while (word[len] != 0){
        len++;
    }

    for(int j = 0; j <= len; j++){
        for (int i = 0; i <= 25; i++){
            if (Alpha[i] == word[j]){
                Alpha[i] = -2;
            }
        }
    }
    
    for (int i = 0; i <= 25; i++){
        if (Alpha[i] != -2){
            Alpha[i] = -1;
        }
    }

    for(int j = 0; j <= len; j++){
        for (int i = 0; i <= 25; i++){
            if (word[j] - 97 == i && Alpha[i] == -2){
                Alpha[i] = j;
            }
        }
    }

    for (int i = 0; i <= 25; i++){
        printf("%d ", Alpha[i]);
    }

    return 0;

}



#include <stdio.h>

int main(void){
    int hour, minute, tSet;

    scanf("%d %d\n%d", &hour, &minute, &tSet);

    int endH = 0, endM = 0;

    if(minute + tSet < 60){
        endH = hour;
        endM = minute + tSet;
    } else{
        endH = hour + (minute + tSet)/60;
        endM = (minute + tSet)%60;
    }

    if (endH >= 24){
        endH = endH - 24;
    }
    
    printf("%d %d", endH, endM);

    return 0;
}
 #include <stdio.h>

int main(void){

    int H,M,Time,ovenH,ovenM;

    scanf("%d %d", &H, &M);
    scanf("%d", &Time);

    ovenH = H + (M + Time)/60;
    ovenM = (M + Time)%60;

    if (ovenH >= 24){
        ovenH = ovenH % 24;
    }

    printf("%d %d", ovenH, ovenM);

    return 0;
}
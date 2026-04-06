#include <stdio.h>

int main(void){
    int M, N;
    int result = 64;

    scanf("%d %d", &M, &N);
        
    char tem[50][50];
    char board[8][8];

    for (int i = 0; i < M; i++) {           //tem받기
        for (int j = 0; j < N; j++) {
            scanf(" %c", &tem[i][j]);
        }
    }   
    

    for (int p = 0; p <= M-8; p++){          //체스판이동 p, q
        for (int q = 0; q <= N-8; q++){
            int cnt = 0;    //cnt 0초기화
                
            for (int i = p; i < p+8; i++) {          //이동한 p, q에8x8만 검사하기
                for (int j = q; j < q+8; j++) {
                    if ((i+j)%2 == 0){
                        if (tem[i][j] != 'W')
                            cnt +=1;
                    } 
                    if ((i+j)%2 == 1){
                        if (tem[i][j] != 'B')
                            cnt +=1;
                    } 
                }
            }
            if (64-cnt < cnt){      //W,B 자리 바꾸기 가정
                cnt = 64-cnt;
            }
            if (cnt < result){      //가장 작은 cnt넣기 
                result = cnt;
            }

        }
    }
    
    printf("%d", result);

    
    return 0;
    
}
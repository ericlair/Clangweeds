#include <stdio.h>

int main() {
    char id[51]; // 아이디 길이는 최대 50자이므로 여유 있게 설정합니다.
    
    // 입력을 받습니다.
    scanf("%s", id);
    
    // 아이디 뒤에 ??!를 붙여 출력합니다.
    printf("%s??!\n", id);
    
    return 0;
}
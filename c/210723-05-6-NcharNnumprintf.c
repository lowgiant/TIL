#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n; 
    char a;
    printf("횟수와 출력할 문자를 입력해주세요.\n");
    scanf("%d %c", &n, &a);
    while(n--){
        printf("%c ", a);
    }
    return 0;
}

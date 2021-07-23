#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n, sum = 0;
    printf("1 부터 N까지의 합을 구하기\n");
    printf("N값을 입력하세요.\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum = sum+i;
    }
    printf("%d\n",sum);
    return 0;
}

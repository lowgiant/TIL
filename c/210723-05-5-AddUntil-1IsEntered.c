#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int sum =0;
    for(; 1;){
        int x;
        printf("숫자를 입력해주세요.\n");
        scanf("%d",&x);
        if(x==-1) break;
        sum += x;
    }
    printf("합은 %d\n",sum);
}
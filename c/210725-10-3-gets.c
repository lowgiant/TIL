#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    printf("문자열 gets로 받아 보기\n");
    int strings[100];
    gets(strings);
    printf("%s\n", strings);

    return 0; 
}
#include <stdio.h>

int main(void){
    printf("특정문자 입력 후 한개 출력\n");
    char getchars = getchar();
    printf("%c\n",getchars);
    return 0;
}
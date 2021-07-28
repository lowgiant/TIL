#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int a;
    char c;
    printf("%d\n", &a);
    int temp;
    while((temp = getchar()) !=EOF && temp != '\n') {}
    scanf("%c", &c);
    printf("%c\n",c);
    return 0;
}
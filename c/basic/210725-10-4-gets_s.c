#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define gets(s) gets_s(s)

int main(void){
    char strings[100];
    gets_s(strings, sizeof(strings));
    printf("%s\n", strings);

    return 0;
}

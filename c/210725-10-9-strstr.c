#include <stdio.h>
#include <string.h>

int main(void){
    char strings[20]= "I like you";
    char find[20] ="like";

    printf("찾은 문장: %s\n", strstr(strings,find));
    return 0;
}
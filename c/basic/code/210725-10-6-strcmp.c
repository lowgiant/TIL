#include <stdio.h>
#include <string.h>

int main(void){
    char strings[20] = "lowgiant";
    char strings2[20] = "highgiant";

    printf("두 배열의 사전 순 비교: %d\n", strcmp(strings,strings2));

    return 0;

}
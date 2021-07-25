#include <stdio.h>
#include <string.h>

int main(void){
    char jin[10] = "jin";
    char bin[10] = "bin";
    strcpy(jin, bin);
    printf("복사된 문자열: %s\n", jin);
    return 0;
}
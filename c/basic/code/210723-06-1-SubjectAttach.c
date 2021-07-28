#include <stdio.h>

void dice(int input){
    printf("주사위 번호: %d\n", input);
}

int main(void){
    dice(2);
    dice(1);
    dice(5);
    return 0;
}
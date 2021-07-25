#include <stdio.h>

int giobal = 5;

int chageValue(){
    giobal =10; 
}

int main(void){
    printf("전역변수 변환 함수 적용 전: %d\n", giobal);
    chageValue();
    printf("전역변수 변환 함수 적용 후: %d\n", giobal);
    return 0; 
}
#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int(*process(char* a))(int, int){
    printf("%s\n", a);
    return add;
}

int main(void){
    printf("%d\n", process("10과 20을 더하면 무엇인가요?")(10,20));
    return 0;
}
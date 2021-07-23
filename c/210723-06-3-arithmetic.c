#include <stdio.h>

void arithmetic(int a, int b){
    printf("%d + %d = %d\n", a,b ,a+b);
    printf("%d - %d = %d\n", a,b ,a-b);
    printf("%d * %d = %d\n", a,b ,a*b);
    printf("%d / %d = %d\n", a,b ,a/b);
    printf("\n");
}

int main(void){
    arithmetic(20,20);
    return 0;
}
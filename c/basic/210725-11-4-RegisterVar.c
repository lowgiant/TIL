#include <stdio.h>

int main(void){
    register int RegisterVar = 10, i;

    for (i = 0; i <RegisterVar; i++){
        printf("%d\n", i);
    }

    return 0;
}
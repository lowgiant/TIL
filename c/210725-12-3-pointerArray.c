#include <stdio.h>

int main(void){
    int Arrays[5] ={1,2,3,4,5};
    int *pointers = Arrays;
    printf("%d\n", pointers[2]);

    return 0;
}
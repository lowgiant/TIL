#include <stdio.h>

int main(void){
    int Arrays[5]= {1,2,3,4,5};
    int *ArrayPointer = &Arrays[0];
    printf("%d\n", ArrayPointer[1]);
    return 0;
}
#include <stdio.h>

int main(void){
    int pointArray[5] ={1,2,3,4,5};
    int *pointers = pointArray;

    printf("%d 1\n", *(pointers++));
    printf("%d 3\n", *(++pointers));
    printf("%d 5\n", *(pointers+2));
    
    return 0;
}
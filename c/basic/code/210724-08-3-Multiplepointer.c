#include <stdio.h>

int main(void){
    int ten = 10;
    int *point = &ten;
    int **MulPoint = &point;

    printf("%d\n", **MulPoint);
    return 0;
}
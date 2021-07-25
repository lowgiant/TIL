#include <stdio.h>


int main(void){
    int Array2d[5][5] = {{1,2,3,3,5},{1,3,3,4,5}};
    int (*pointers)[5] = Array2d[1];
    int i;

    for (i = 0; i<5; i++){
        printf("%d", pointers[0][i]);
    }
    return 0;
}
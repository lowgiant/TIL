#include <stdio.h>
int Arrays2D[3][3]= {{1,2,3},{2,3,5},{3,4,2}};

int main(void){
    int i, j;

    for(i =0; i<3; i++){
        for(j= 0; j<3; j++){
            printf("%d", Arrays2D[i][j]);
        }
        printf("\n");
    }    

}
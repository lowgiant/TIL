#include <stdio.h>
int Array3D[2][3][3] = {{{1,2,3},{2,3,4},{4,5,6}},
                         {{1,2,3},{2,3,4},{4,5,6}}};


int main(void){
    int i , j, b;
    for(i=0; i<2;i++){
        for(j=0; j<3; j++){
            for(b=0; b<3; b++)
                printf("%d", Array3D[i][j][b]);
        }
        printf("\n");
    }
    printf("\n");

}
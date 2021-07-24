#include <stdio.h>

int main(void){
    int sample[] = {10,2,3,3,4,2};
    for (int i = 0; i <6; i++){
        printf("%d\n", &sample[i]);
    } 

    return 0;
}
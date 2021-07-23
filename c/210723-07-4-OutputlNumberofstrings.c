#include <stdio.h>

int main(void){
    char sample[] = "Hello world";
    int count = 0;
    for(int i = 0; i <10; i++){
        if (sample[i] == 'l')
            count ++;
    }
    printf("%d\n", count);
}
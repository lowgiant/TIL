#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *mallocs = malloc(sizeof(int));
    printf("%d\n", mallocs);
    mallocs = malloc(sizeof(int)); 
    printf("%d\n", mallocs);
    
    return 0;
}
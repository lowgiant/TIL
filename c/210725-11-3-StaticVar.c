#include <stdio.h>
void process(){
    static int StaticVar = 5;
    StaticVar = StaticVar+1;
    printf("%d\n", StaticVar);
}

int main(void){
    process();
    process();
    process();
    return 0;    
}
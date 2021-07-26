#include <stdio.h>

void myfunction(){
    printf("It's my function\n");
}

void yourfunction(){
    printf("It's your function\n");
}

int main(void){
    void(*fp)() = myfunction;
    fp();
    fp = yourfunction;
    fp();
    return 0;
}
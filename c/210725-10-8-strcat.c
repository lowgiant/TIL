#include <stdio.h>
#include <string.h>

int main(void){
    char title[20] = "My name is";
    char name[20]= "lowgiant";

    strcat(title, name);
    printf("합쳐진 문자열 %s\n", title);
    return 0;
}


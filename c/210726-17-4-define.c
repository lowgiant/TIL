#include <stdio.h>
#define ll long long
#define ld long double

int main(void){
    ll a = 987654321000;
    ld b = 100.30230; 

    printf("%.Lf\n", a * b);
    
    return 0;

}
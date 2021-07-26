#include <stdio.h>
#include <limits.h>

int main(void){
    printf("배열의 원소 중 최댓값 찾기\n")
    int sample[5] = {10,239,405,1302,120};
    int i, maxValue = INT_MIN;
    for (i = 0; i<5; i++){
        if(maxValue < sample[i])
            maxValue = sample[i];
    }
    printf("최댓값은: %d\n", maxValue);
    return 0;
}
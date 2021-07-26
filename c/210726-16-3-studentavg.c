#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int score;
} Student; 

int main(void){


    int n, sum = 0; 
    FILE *fp;
    fp = fopen("student.txt", "r");
    fscanf(fp, "%d", &n);
    Student *students = (Student*)malloc(sizeof(Student)*n);
    for (int i =0; i<n; i++){
        fscanf(fp, "%s %d", &((students +i)->name), &((students+i)->score));
    }
    for (int i = 0; i< n; i++){
        sum += (students+i) -> score;
    }
    free(students);
    fclose(fp);
    printf("%d, %d \n",sum, n);
    printf("점수평균 %.2f\n", (double)sum/ n);
    return 0;

    }

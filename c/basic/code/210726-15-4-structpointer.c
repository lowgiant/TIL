#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ 
    char studentId[10];
    char name[10];
    int grade;
    char major[50];
} Student;

int main(void){
    Student *s = malloc(sizeof(Student));
    strcpy(s->studentId, "20101111");
    strcpy(s->name, "lowgiant");
    s->grade = 4;
    strcpy(s->major, "컴퓨터 과학과");

    printf("학번: %s\n", s->studentId);
    printf("이름: %s\n", s->name);
    printf("학년: %d\n", s->grade);
    printf("전공: %s\n", s->major);
    
    return 0;

}
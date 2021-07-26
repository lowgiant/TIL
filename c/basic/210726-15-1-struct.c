#include <stdio.h>
#include <string.h>

struct Student {
    char studentId[10];
    char name[10];
    int grade;
    char major[51];
};

int main(void){
    struct Student s;
    strcpy(s.studentId, "201011111");
    strcpy(s.name, "lowgiant");
    s.grade = 4;
    strcpy(s.major, "컴퓨터과학과");
    printf("학번: %s\n", s.studentId);
    printf("이름: %s\n", s.name);
    printf("학년: %d\n", s.grade);
    printf("학과: %s\n", s.major);
    return 0;
}


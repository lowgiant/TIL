#include <stdio.h>
struct Student {
    char studentid[10];
    char name[10];
    int grade; 
    char major[51];
};

int main(void){
    struct Student s = {"20101111", "lowgiant", 4, "컴퓨터과학과"};
    printf("학번: %s\n", s.studentid);
    printf("이름: %s\n", s.name);
    printf("학년: %d\n", s.grade);
    printf("전공: %s\n", s.major);
    
}
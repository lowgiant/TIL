# 01-C언어
## 1) 기본 문법
- `#include` 명령어를 이용해 `여러 라이브러리`를 불러옴
-  `stdio.h`는 다양한 `기본기능`가짐

## 2) 메인함수
- 프로그램은 `메인`(main)함수로 시작
- 함수는 `반환 값`(Return Value) 없을 때, 메인함수는 `항상 0`을 반환 하는 것이 일반적

## 3) 기본 출력 함수
- `printf()`를 사용해서 특정한 문자를 출력함.

## 4) 세미콜론
- 하나의 명령어가 끝났을 때 `세미콜론(;)`을 붙임

## 5) 변수와 상수
1. `변수`(Variable)는 변할 수 있는 데이터<br>
    변수를 선언할 때는 `자료형`과 `변수명`을 입력
    ```C
    int a; //정적 변수는 기본적으로 0을 초기화 됨
    int a = 5; 
    ```
2. `상수`(Constant)는 변하지 않는 데이터

## 6) 자료형

구분 | 자료형 
--- | ----
int | 정수형
long long | 숫자가 긴 정수형
double | 실수형
string | 문자열
bool | 논리
char | 한 문자

## 7) 예약어와 식별자
- 변수나 함수 등의 고유한 이름을 지정할 때 `식별자`를 사용
- C언어 문법으로 정해진 `예약어`는 식별자로 사용 할 수 없음
<br>

# [02-기본 입출력]()
### 1) scanf()
- scanf() 함수는 취약한 함수로 사용제한을 받음(아래 내용 위 적용)
  ```C
  #define _CRT_SECURE_NO_WARNINGS 
  #include <stdio.h>

  int main(void) {
    int a;
    scanf("%d", &a);
    printf("입력한 숫자는 %d입니다.\n", a); 
    return 0;
    }
  ```

ex) Vscode에서 scanf 입출력이 안될 때<br> 
- Vscode setting에서 아래 내용 추가
- 출력 범위 output -> Terminal로 변경됨 입출력 가능<br>
- Edit in settings.json

```JSON
"code-runner.runInTerminal": true 
```

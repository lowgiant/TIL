# Python basic

## 01-프로그래밍
- 컴퓨터가 이해할 수 있는 언어
  
### 1. 변수
- 데이터를 담는 그릇
- 변할 수 있는 값
- 이름을 잘 지어야 함. 
### 2. 변수의 종류
  - 자료형 별 특징 설명
    자료형 | 설명 | 결과값 |
    --- | --- | --- |
    숫자형 | 정수, 실수등 숫자를 다루는 자료형 | 0 or 1.25 or 123
    문자열 | 문자열을 다루는 자료형 | 'string'
    리스트 | 다른 자료형의 모음을 다루는 자료형 | [1,2,3,4]
    튜플 | 리스트와 같지만 수정 불가능 자료형 | (1,2,3,4)
    딕셔너리 | 키와 같으로 이루어진 자료형 | { 'name': 'lowgiant'}
### 3. 숫자형 연산
   - 연산자 마다 예시
        연산 | 기호 | 예시 | 결과값
        :---: | :---: | :---: | :---:
        덧셈 | + | 4+5 | 9
        뺄셈 | - | 5-4 | 1
        곱셈 | * | 5*4 | 20
        나눗셈 | / | 10/2 | 5
        나머지 | % | 11%6 | 5
        몫 | // | 11//6 | 1

## 02-자료형

### 1. 문자열
1. 문자열을 표현하는 쿼터의 갯수
    종류 | 목적 | 예시
    :---: | --- | ---
    'string' | 문자열 안에 "를 포함하기 위해 | 'to: "park"'
    "string" | 문자열 안에 '를 포함하기 위해 | "I'am study"
    """string """| 문자열 안에 '와 여러행의 문자열을 다루기 위해서 | """<br>이름 <br> 이메일 <br> """
1. 이스케이프 코드
    종류 | 목적 
    --- | --- 
    \n | 개행(줄바꿈)
    \t | 탭
    \\\ | 문자의 그대로의 \
    \\' | 문자 그대로 '
    \\" | 문자 그대로 "
2. 연산 
    종류 | 설명 | 예시
    :---: | --- | --- |
    \+ | 문자열 붙이기 | first_name = kim <br> last_name = min <br> first_name + " " +last_name = kin min 
    \* | 문자열 반복 | '-' *5 <br> -----
3. 인덱싱 및 슬라이싱
    1. 인덱싱: 문자열의 특정 `문자` 가리킴 
        ```Python
        index = 'name'
        print(index[1]) // a
        ```
    2. 슬라이싱: 문자열에서 특정 `문자열` 가리킴
        ```Python
        slices = 'name'
        print(slices[0:1]) // na
        ```
4. 내장 함수
    ```python
    name = 'Low giant'
    name_trip = ' Low giant '
    ```
    함수명 | 설명 | 사용 방법
    :---: | --- | ---
    count | 특정 문자 수 반환 | name.count('o') <br> `1`
    find | 특정 문자 위치 반환 | name.find('o') <br> `1`
    index | 특정 문자 위치 반환 | name.index('o') <br> `1`
    join | 문자 사이에 입력 문자 삽입 | comma = ','<br> comma.join(name) <br> `l,o,w,g,i,a,n,t`
    upper | 대문자로 변환해 반환 | name.upper() <br> `'LOW GIANT'`
    lower | 소문자로 변환해 반환 | name.lower() <br> `'low giant'`
    replace | 문자열을 치환한 결과 반환 | name.replace('Low','High') <br> `'High giant'`
    split | 문자열 나눈 결과 반환 | name.split(' ') <br> `['Low','giant']`
    lstrip | 왼쪽 공백 제거한 값 반환 | name_trip.lstrip() <br> `'Low giant'`
    rstrip | 오른쪽 공백 제거한 값 반환 | name_trip.rstirp() <br> `' Low giant'`
    strip | 양쪽 공백 제거한 값 반환 | name_trip.strip() <br> `'Low giant'`

    - 에러 등 기타 상황
      - find() 찾는 값이 없으면 `-1` 
      - index()는 `value 에러`가 나옴

### 2. 리스트
1. 특징
    - 데이터의 모음을 담기 위한 자료형
    - 데이터의 추가, 삭제 수정이 자유로움
    - 중복된 데이터도 가능
    - 인덱싱으로 데이터를 다를 수 있음

2. 연산
    1. 더하기
        - 리스트 붙이기
            ```python
            a = [1,2,3]
            b = [6,7,8]
            c = a + b 
            // [1,2,3,4,5]
            ```
    2. 곱하기
        - 리스트 반복
            ```python
            a = [1,2,3]
            b = a * 3
            // [1,2,3,1,2,3,1,2,3]
            ```
3. 인덱싱 및 슬라이싱
    1. 인덱싱
        ```python
        a = [1,2,3,4]
        a[1]
        // 2
        ``` 
    2. 슬라이싱
        ```python
        a = [1,2,3,4]
        a[0:2]
        // [1, 2, 3]
        ``` 
4. 내장함수
    ```python
    num_total = [1,2,3]
    str_total = ['a','c','b']
    ```
    함수명 | 설명 | 사용 방법
    :---: | --- | ---
    append | 요소 뒤 추가 | num_total.append('4')<br> `[1,2,3,4]`
    sort | 요소들 정렬 | str_total.sort() <br> `['a','b','c']`
    reverse | 요소들을 뒤집음 | num.total() <br> `[3,2,1]`
    index | 입력값의 위치 반환 | num.total(1) <br> `0`
    insert | 특정 위치에 요소 추가 | num.total(1,5) <br> `[1,5,2,3]`
    remove | 입력값 삭제 | num.total(1) <br> `[2,3]`
    pop | 마지막 요소를 꺼내고 삭제 | num_total.pop() <br> `[1,2]`
    count | 입력값 갯수 | num_total.count(1) <br> `1`

### 3. 튜플
- () 안에 데이터를 넣음
- `읽기`만 가능
- 연산, 인덱싱, 슬라이싱 리스트와 동일
- 내장함수 중 `값 변경 함수` 사용 못함 / 나머진 가능

### 4. 딕셔너리
1. 특징
    - 대응관계를 나타낼 수 있는 자료형
    - Key, value 형식
    1. 인덱싱
        ```python
        people = {'first_name': 'low', 'last_name': 'giant'}
        // 인덱싱
        people[first_name] 
        'low'

        //삭제
        del(people[first_name]) 
        {'last_name': 'giant'}
        ```
    2. 슬라이싱
        - 지원하지 않음

2. 내장함수
     ```python
    class_total = {'a': 123, 'b':456}
    ```
    함수명 | 설명 | 사용 방법
    :---: | --- | ---   
    keys | key 반환 | class_total.keys()<br>`dict_keys(['a'.'b'])`
    values |value 반환 | class_total.values() <br> `dict_values([123, 456])`
    items | key,value 쌍을 반환 | class_total.items() <br> `dict_items([('a', 123), ('b', 456)])`
    get | key에 대한 값을 반환 | class_total.get('a') <br> `123`
    
## 03-제어문
1. 특징
    - 특정 조건의 참, 거짓에 따라 작성한 코드 동작
2. if문
    ```python
    place_status = 'home'
    if home_status == 'home':
        print("집에 있음")
    elif home_status == 'company'
        print("회사에 있음")
    else: 
        print("개인 일정")
    ```
3. 자료형 별 참거짓
    종류 | 설명 | 사용 방법
    :---: | --- | ---
    숫자형 | 0이 아닌 수 | 0
    문자열 | 빈 문자열이 아닌 문자열 | ""
    리스트 | 빈 리스트가 아닌 리스트 | []
    튜플 | 빈 튜플이 아닌 튜플 | ()
    딕셔너리 | 빈 딕셔너리가 아닌 딕셔너리 | {}
4. 비교연산자
     연산자 | 설명 
    :---: | ---
    x `<` y | x가 y보다 `작다`
    x `>` y | x가 y보다 `크다`
    x `==` y | x와 y가 `같다`
    x `!=` y | x와 y는 `다르다`
    x `>=` y | x가 y보다 `크거나 같다`
    x `<=` y | x가 y보다 `작거나 같다`
    x `and` y | x와 y가 `둘다 참`이면 참
    x `or` y | x 또는 y가 `하나 이상 참`이면 참
    `not` x | x기 `거짓`이면 참
    x `in` 리스트 | 리스트에 x가 `있으면` 참
    x `in` 튜플 | 튜플에 x가 있으면 참
    x `in` 문자열 | 문자열에 x가 있으면 참
    x `in` 딕셔너리 | 딕셔너리에 x가 있으면 참
    x `not in` 리스트 | 리스트에 x가 `없으면` 참
    x `not in` 튜플 | 튜플에 x가 없으면 참
    x `not in` 문자열 | 문자열에 x가 없으면 참
    x `not in` 딕셔너리 | 딕셔너리에 x가 없으면 참

## 04-반복문
- 특징
    - 반복 해야할 데이터가 있을 때

1. for문
    > 데이터의 수 만큼 반복
    - 문법
        ```python
        for 변수명 in 리스트 or 튜플 or 문자열
            실행 문장

        for 변수명 in range(반복횟수(0부터 시작)
            실행 문장
        )    
        ```
2. while 문
    > 특정 조건을 만족 할때까지 반복
    - 문법
        ```python
        while 조건문:
            실행 문장
        ```
3. 기타
    1. break문
        - 반복문 중간에 나가고 싶을 때
    2. continue문
        - 다음 반복문으로 이동

## 05-함수
1. 특징
    - `입력값`을 받아 특정 작업을 수행한 후 `결과값`을 주는 것
    - 입,출력 값의 유무는 케바케 
    - 중복이 줄어듬
        ```python
        def add(a,b):
            return a+b
        ```
2. 실행
    - 실행 전에 함수가 만들어져야함
    - 입력 값은 함수안에서 `변수`
        ```python
        add(1,2) // 3
        ```
3. 반환
    - 함수를 호출한 곳에 결과값 전달하는 함수(return)
    - 반환 값이 없으면 실행 문장만 수행
    - 아무 값이 없을 때 return만 사용가능
4. 내장함수
    내장함수 | 설명 | 사용 방법
    :---: | --- | ---
    int | 문자열 변수를 숫자형으로 변환해 반환 | num = int('1') <br> `1`
    str | 숫자형 변수를 문자열로 변환해 반환 | string = str(1) <br> `'1'`
    list | 문자열, 튜플 변수를 리스트로 변환해 반환 | listed = list('1234') <br> `['1', '2', '3', '4']`
    tuple | 문자열, 리스트 변수를 튜플로 변환해 반환 | tuples = tuple('1234') <br> `('1', '2', '3', '4')`
    len | 변수의 길이를 반환(숫자형 변수X) | length = len(['1','2']) <br> `2`
    input | 사용자에게 문자열 입력 받음 | user_input = input('값 입력해') <br> `입력한 값`
    range | 리스트를 만들어 주는 함수 | list_range = range(10) <br>`range(0, 10)`
    max | 리스트, 튜블, 문자열에서 최대값 반환 | max_var = max([20,30,40]) <br> `40`
    min | 리스트, 튜블, 문자열에서 최소값 반환 |  min_var = min([20,30,40]) <br> `20`
## 06-클래스
1. 특징
    - 변수와 함수의 집합
        ```python
        class 클래스이름:
            def __init__(self):
                self.변수명 = 변수값
            def 함수명(self, 인자값 변수명):
                실행할 코드
            
            def 함수명(self, 인자값 변수명):
                실행할 코드
            ~ ~ ~ ~
        ```
2. \_\_init__ 함수
    - 클래스 변수가 생성될 때 자동으로 호출되는 함수
    - 생성자라고 부른 함수
    - 클래스 변수 안에 변수를 생성할 때 사용
3. self 
    - 클래스의 변수 및 함수에 접근하기 위한 변수

## 07-모듈
1. 특징
    - 한 파일로 많은 수의 코드를 보면 `알아보기` 힘듬
    - 파트마다 나눠서 `파일을 분리` 시킴
    - 분리시킴 파일 사용하기
        ```python
        from py파일경로 import 변수, 함수, 클래스
        ```
2. import만 사용
    - 모듈 안의 클래스, 함수 등을 명시 않고 `모듈 자체만` 가져오기
    - 모듈 안의 클래스, 함수 등을 명시해 줘야함
        ```python
        from bs4 import BeautifulSoup
        
        BeautifulSoup ~ 

        from bs4
        bs4.BeautifulSoup 
        ```
3. from 폴더.파일명
    - 위 구조로도 자주 사용됨

4. \_\_name__ 내장변수
    - 해당 클래스를 어디서 실행했는지 나타냄
    - from~import 의해서는 실행이 안됨

## 08-파일 입출력
1. 특징
    - 텍스트파일 데이터 읽고 쓰기
        ```python  
        변수명 = open(파일명, 읽고 쓰고 등 설정)
        file_name = open('data.txt', 'r')
        ```
2. openpyxl
    - 엑셀 다루는 패키지
        ```python
        #파일 읽기
        from openpyxl import load_workbook
        wb = load_workbook(파일명)
        # 실행
        data = wb.active

        # 엑셀 시트 A1 있는 값 가져오기
        data['A1'].value 

        #파일 쓰기
        from openpyxl import Workbook
        wb = Workbook()
        ws = wb.create_sheet(파일명)

        ws['A1'] = 넣고싶은 값
        ```
    1. load_workbook 문제점
        - 엑셀 내용 한번에 다 가져옴
        - 파일이 클 경우 못 가져올 수도 있음

## 09-이메일
1. 필요한 설정
    - SMTP 서버주소: 메일 보내는 서버주소
    - POP 서버주소: 메일 받는 서버주소
    - SMTP 서버포트: SMTP 주소로 갈 때 쓸 길 번호
    - POP 서버포트: POP 주소로 갈 때 쓸 길 번호
    - 계정 정보: 아이디, 비밀번호
2. 메일
    - 지메일, 네이버 등 SMTP 설정 각 다름 
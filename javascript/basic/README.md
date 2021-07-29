# Javascript basic

## 01-Hello wolrd
- 출력문
    ```javascript
    console.log("Hello world")
    ```
- `세미콜론`(;)은 붙여도 되고 안 붙여됨

## 02-변수와 상수
1. 변수: 값이 변하는 수 
   - 같은 이름으로 동일하게 선언은 안됨
   - `let` 키워드 사용 
       ```javascript
       let value = 1
       console.log(value) // 1
       
       value = 2 
       console.log(value) // 2
       ```

2. 상수: 값이 안 변함
   - `const` 키워드 사용 
       ```javascript
       const value = 1
       console.log(value)
       ```
3. 데이터 타입
    1. 숫자(number)
        ```javascript
        const value = 1
        ``` 
    2. 문자열(string)
        - 작은 따옴표나 큰 따옴표 둘다 써도 됨
        - 단, 하나의 따옴표로 쭉 써야함.
        ```javascript
        const text = "hello"
        const name = "이름"
        ```
    3. 참/거짓(Boolean)
        - 참과 거짓으로 나누어짐.
        ```javascript
        const good = true
        const loading = false
        ```
    4. nill and undefined
        - 둘다 `없음`을 의미
        - `null`은 값이 없음
        - `undefined`은 값이 설정이 되지 않음.
        ```javascript
        //null 
        const friend = null 
        console.log(friend) // null
        //undefined
        let criminal; 
        conosole.log(criminal) // undefined
        ```
## 03-연산자
```javascript
let value = 1 // 변수 선언
value = 2     // 대입 연산자
```

1. 산술 연산자 

    종류 | 뜻 
    --- | ---
    \+ | 덧셈
    \- | 뺄셈
    \* | 곱셈
    \/ | 나눗셈

    ```javascript
    let a = 1 + 2  
    console.log(a) // 3

    a = 1 + 2 -(3*4) 
    console.log(a) // 0 

    let a = 1
    a++; 
    ++a;
    console.log(a)  // 3
    ```
2. 대입 연산자 
   - 값에 연산을 한 값을 바로 사용 할 수 있는 연산자 
   
    ```javascript
    let a = 1 
    a += 3
    a -= 3
    a *= 3
    a /= 3
    console.log(a)
    ```
3. 논리 연산자
- 불리언 타입을 위한 연산자
    종류 | 뜻 
    :---: | ---
    \! | NOT(반대로 표현)
    \&& | AND(둘다 참일때 참)
    \OR | OR(한쪽 참일때 참)

4. 비교 연산자
- 두 값을 비교 할 때 사용
    1. 두 값이 일치하는지 확인
        ```javascript
        const a = 1;
        const b = 1;
        const equals =  a === b;
        console.log(equals) // true

        const a = 0;
        const b = false;
        const equals =  a == b;
        console.log(equals) // true
        ```
    2. 두 값이 일치하지 않는지 확인
        ```javascript
        const value = 'a' !== 'b';
        console.log(value);
        ```
    3. 크고 작음
        ```javascript
        const a = 10;
        const b = 15;
        const c = 15;

        console.log(a < b);  // true
        console.log(b > a);  // true
        console.log(b >= c); // true
        console.log(a <= c); // true
        console.log(b < c);  // false;
        ```
5. 문자열 붙이기
- +로 할 수 있음
    ```javascript
    const a = '안녕';
    const b = '하세요';
    console.log(a + b); // 안녕하세요
    ```
## 04-

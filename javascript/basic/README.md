# Javascript basic

## 01-Hello wolrd
- 출력문
    ```javascript
    consloe.log("Hello world")
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
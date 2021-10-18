# 4-4-Exception.md
## 1) 특징
- Web Application의 입장에서 바라 봤을때, 에러가 났을 때 내려줄 수 있는 방법이 많지 않음
    1. 에러페이지
    2. 4XX Error Or 5XX Error
    3. Client가 200 ㅇ에 처리를 하지 못할때는 200을 내려주고 별도의 에러 메시지 전달
## 2) 처리
- @ControllerAdvice: Global 예외 처리 및 특정 package / Controller 예외처리
- @ExceptionHandler: 특정 Controller의 예외처리
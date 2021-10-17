# 4-3-SpringBootValidation
## 1) 특징
- 자바에서 null값에 대해 접근하려고 할때 null pointer exception이 발생함
- null을 방지하기 위해 미리 `검증`하는 과정을 Validation이라고 함.
- if 문으로도 구현이 가능하지만 애노테이션으로 주로함
## 2) 주의사항
1. 검증해야 할 값이 많은 경우 코드가 길어짐
2. 구현에 따라서 달라 질 수 있지만 Service Logic과의 분리 필요
3. 흩어져 있는 경우 어디에서 검증하는지 알기 어려우며, 재사용 한계가 있음
4. 구현에 따라 갈라지지만, 검증 Logic이 변경된 경우 테스트 코드 등 참조하는 클래스에서 Logic이 변경되어야 하는 부분이 발생
## 3) 방법
1. gradle dependecies 추가
2. 필요한 Validation 작성

    Validation | 내용
    --- | ---
    @Size | 문자길이 측정
    @NotNull | null 불가
    @NotEmpty | null, ""불가
    @NotBlank | null, "", "" 불가 </br>(한쪽만 쿼터 써진 경우)
    @Past | 과거 날짜
    @PastOrPresent | 오늘이거나 과거 날짜
    @Future | 미래 날짜
    @FutureOrPresent | 오늘이거나 미래 날짜
    @Pattern | 정규식
    @Max | 최대값
    @Mix | 최소값
    @AsserTrue / False | 별도 Logic적용
    @Valid | 해당 object validation 실행


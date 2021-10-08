# 1-3-POJO 
## 1) 특징
- POJO(Plain Old Java Object)
- 순수한 자바 오브젝트를 뜻함
1. 특정 규약에 종속되지 않음
    - 특정 Library, Module에서 정의된 클래스를 상속받아서 구현하지 않아도 됨.
    - 외부의 의존성을 두면 안됨
    - 순수한 JAVA로 구성이 가능해야함.
2. 특정 환경에 종속 되지 않음
    - 특정 비즈니스 로직을 처리 하는 부분에 외부 종속적인 http, request, session 등 POJO를 위배한 것으로 간주
    - @Annotation 기반으로 설정한 부분도 엄연히는 POJO라고 볼수는 없음
## POJO Framework
1. Spring, Hibernate
    - 하나의 서비를 개발하기 위해서는, 시스템의 복잡함, 비즈니스 로직의 복잡함 등 다양한 어려움을 맞이하게 됨
    - 객체지향적인 설계과 POJO를 지향
    - 개발자가 서비스 로직에 집중
    - POJO로 쉽게 개발 할 수 있음
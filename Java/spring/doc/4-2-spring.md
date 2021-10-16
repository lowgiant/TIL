# 4-2-스프링
## 1) 특징
- Spring 1.0버전은 04년 3월 출시
- 지난 20년 세월 동안 자바 엔터프라이즈 개발의 최고의 자리 차지
- 스프링 프레임워크의 구성은 20여가지로 구성
- DI, AOP, etc 제공을 해주며, 필요한 모듈만 선택해 사용 가능
- 현재 단일 아키텍처(모놀리스)에서 마이크로서비스 아키텍처로 변환 중
- 스프링 부트, 스프링 클라우드, 스프링 데이터, 스프링 배치, 스프링 시큐리티 중점을 둠
- Spring의 과제는 `테스트의 용이성`, `느슨한 결합`에 중점
- 2000년대 초의 자바 EE 애플리케이션은 작성/테스트가 매우 어려웠음 
  - 한번 테스트 하기가 번거러움
  - 느슨한 결합이 된 애플리케이션 개발이 힘든 상태
  - 데이터 베이스와 같이 외부에 의존성을 두는 경우 단위테스트가 불가능
- Ioc의 등장
  - 스프링이 다름 프레임워크와 가장 큰 차이점 IoC를 통한 개발 진행
- AOP
  - AOP를 사용해 로딩, 트랜잭션 관리, 시큐리티에서의 적용 등 AspectJ와 같이 완벽하게 구현
  - AOP와 통합해 사용 가능
## 2) IoC(Inversion of Control)
- IoC(Inversion of Control)
  - 스프링에서는 일반적인 Java 객체를 new로 생성해 Spring Container에 모두 맡김
  - 개발자에서 -> 프레임워크로 `제어`의 객체 관리의 권한이 넘어갔음으로 `제어의 역전`이라고 표현
## 3) DI(Dependency Injection)
- 의존성으로 부터 격리시켜 코드 테스트에 용이함
- DI 통해, 불가능한 상황을 Mock와 같은 기술을 통해 안정적으로 테스트 가능
- 코드를 확장하거나 변경할 때 영향을 최소화 함(추상화)
- 순환참조를 막을 수 있음
## 4) AOP(Aspect Oriented Programming)
- 관점지향 프로그램
  - 스프링 어플리케이션은 대부분 특별한 경우 제외하고는 MVC
  - 웹어플리케이션에서는 Web Layer, Business Layer, Data Layer로 정의

    단어 | 설명 
    --- | ---
    Web Layer | REST API를 제공해 Client 중심의 로직 적용
    Business Layer | 내부 정책에 따른 logic를 개발
    Data Layer | 데이터 베이스 및 외부와의 연동을 처리
- 주요 Annotation
  annotation | 의미
  --- | ---
  @Aspect | 자바에서 널리 사용한 AOP 프레임워크에 포함<br>AOP를 정의해 Class에 할당
  @Pointcut | 기능을 어디에 적용시킬지, 메소드 및 Annotation 등 AOP를 적용 시킬 지점을 설정
  @Before | 메소드 실행하기 이전
  @After | 메소드가 성공적으로 실행 후 예외가 발생되더라도 실행 
  @AfterReturing | 메소드 호출 성공 실행 시(Not Throws)
  @AfterThrowing | 메소드 호출 실패 예외 발생(Throws)
  @Around | Before / after 모두 제어

# 2-1-디자인 패턴
## 1) 특징 
- 자주 사용하는 설계 패턴을 정형화해서 상황에 맞춰 사용
- 알고리즘과 유사하지만 명확하게 정답이 있는 형태는 아님
- Gof 디자인 패턴
  - 소프트웨어를 설계 할 때는 기존에 경험이 중요함
  - 모든 사람이 다양한 경험을 가질 수는 없음
  - 이러한 부분을 채우기 위해 GOF(Gang of Four)가 나옴
  - 객체지향 개념에 따른 설계 중 재사용할 경우 유용한 설계를 디자인 패턴으로 정리해둠
  - 총 23개 가지임
## 2) 장점
- 개발자(설계자) 간의 원활한 소통
- 소프트웨어 구조 파악 용이
- 재사용을 통한 개발 시간 단축
- 설계 변경 요청에 대한 유연한 대처
## 3) 단점
- 객체지향 설계 / 구현
- 초기 투자 비용 부담
## 4) 생성 패턴
- 객체를 생성하는 것과 관련된 패턴
- 객체의 생성과 변경이 전체 시스템에 미치는 영향을 최소화함
- 코드의 유연성을 높여줌
- 종류
    1. Factory Method
    2. Singleton
       - 어떠한 클래스(객체)가 유일하게 1개만 존재 할때 씀
       - 주로 사용하는 곳: 서로 자원을 공유 할때
       - 실물 세계: 프린터가 해당
       - 실제 프로그래밍: TCP Socket통신에서 서버와 연결된 connect 객체에 씀
    3. Prototype
    4. Builder
    5. Abstract Factory
    6. Chaining
## 5) 구조 패턴
- 프로그램 내의 자료구조나 인터페이스 구조 등 프로그램 구조를 설계하는데 활용 될 수 있는 패턴
- 클래스, 객체들의 구성을 통해서 더 큰 구조를 만들 수 있게 해줌
- 큰 규모의 시스템에서는 많은 클래스들이 서로 의존성을 가지게 됨
- 복잡한 구조를 개발하기 쉽게 만들어줌
- 유지 보수 하기 쉬움
- 종류
    1. Adapter
       - 호환성이 없는 기존 클래스의 인터페이스를 변환해 재사용함
       - SOLID 중에서 개방폐쇄 원칙(OCP)를 따름
       - 실생활: 110v -> 220v 변경해주는 돼지코, 변환기
    2. Composite
    3. Bridge
    4. Decorator
       - 기존 뼈대(클래스)는 유지
       - 필요한 형태로 꾸밀 때 사용
       - 확장이 필요한 경우 상속의 대안으로 활용
       - SOLID중에서 개방폐쇄 원칙(OCP)과 의존 역전원칙(DIP)를 따름
    5. Facade
       - 건물의 앞쪽 정면이라는 뜻
       - 여러 개의 객체와 실제 사용하는 서브 객체의 사이에 복잡한 의존관계가 있을 때 중간에 facade 라는 객체를 두고, 여기서 제공하는 interface 만을 활용해 기능을 사용하는 방식
       - 자신이 가지고 있는 각 클래스의 기능을 명확히 알아야 함
    6. Flyweight
    7. Proxy
       - 대리인 이라는 뜻으로 뭔가 대신해서 처리함
       - Proxy Class를 통해 대신 전달하는 형태로 설계됨
       - 실제 Clients는 Proxy로 부터 결과를 받음
       - Cache의 기능으로도 활용이 가능
       - SOLID 중에서 개방폐쇄 원칙(OCP)과 의존 역전원칙(DIP)를 따름
## 6) 행위 패턴
- 반복적으로 사용되는 객체들의 상호작용을 패턴화한 것
- 클래스나 객체들이 상호 작용한 방법과 책을 분산하는 방법 제공
- 독립적으로 일을 처리하고자 할 때 사용
- 종류
    1. Template Method
    2. Interpreter
    3. Iterator
    4. Observer
       - 변화가 일어 났을 때, 미리 등록된 다른 클래스에 통보해주는 패턴을 구현
       - 많이 보이는 곳은 event listener에서 해당 패턴 사용
    5. Strategy
       - 유사한 행위들을 캡슐화해 객체의 행위를 바꾸고 싶은 경우 직접 변하지 않고 전략만 변경함
       - 유연하게 확장하는 패턴 SOLID중에서 개방폐쇄 원칙(OCP)과 의존 역전 원칙(DIP)를 따름
    6. Visitor
    7. Chain of responsibility
    8. Command
    9.  Mediator
    10. State
    11. Memento
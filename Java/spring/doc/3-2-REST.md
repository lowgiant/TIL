# 3-2-REST
## 1) 특징
- Representational State Transfer: 자원의 상태 전달
- 네트워크 아키텍처 
## 2) 용어 설명
1. Clint, Server
    - 클라이언트와 서버가 서로 독립적으로 분리 돼 있음
2. Stateless
    - 요청에 대해 클라이언트의 상태를 서버에 저장하지 않음
3. Cahche
    - 클라이언트는 서버의 응답을 Cache(임시저장)
    - 클라이언트가 Cache를 통해서 응답을 재사용
    - 서버의 부하를 낮춤
4. 계층화(Layered System)
    - 서버와 클라이언트 사이에 방화벽, 게이트웨이, Proxy 등 다양한 계층 형태로 구성이 가능해야함
    - 확장 가능
5. 인터페이스 일관성
    - 인터페이스의 일관성을 지킴
    - 아키텍처를 단순화시켜 작은 단위로 분리
    - 클라이언트, 서버가 독립적으로 개선
    - 판단 가능
        1. 자원의 식별
            - 리소스 접근할때 URI를 사용
            - https//foo.co.kr/user/100
            - Resource: user
            - 식별자: 100
        2. 메시지를 통한 리소스 조작
            - HTTP Header 부분에 content-type을 통해서 데이터의 타입을 지정
            - 리소스 조작을 위해서 데이터 전체를 전달하지 않고, 메시지로 전달
        3. 자기 서술적 메시지
            - 요청하는 데이터가 어떻게 처리 되어져야 하는지 데이터를 포함 할 수 있어야함
            - HTTP 기반의 REST에서는 HTTP Method와 Header정보, URI의 포함되는 정보로 표현
            - 예시 
              1. 사용자 정보요청
                 - GET: https://fo.co.kr/user/100
              2. 사용자 정보 생성
                 - POST: https://fo.co.kr/user
              3. 사용자 정보 생성 및 수정
                 - PUT: https://fo.co.kr/user
              4. 사용자 정보 삭제
                 - DELETE: https://fo.co.kr/user/100 
        4. 애플리케이션 상태에 대한 엔진으로써 하이퍼미디어
            - Client 요청에 대한 데이터만 응답 해주는 것이 아님 
            - 관련된 리소스에 대한 Link 정보까지 같이 포함
            - 이러한 조건을 갖추면 REST ful X -> REST API라고 함
6. Code on Demand(Optional
    - 자바 애플릿, 자바스크립트, 플래시 등 특정한 기능을 서버로 부터 클라이언트가 전달바당 코드를 실행
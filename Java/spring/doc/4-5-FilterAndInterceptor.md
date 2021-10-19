# Filter And Interceptor
## 1) Filter
- Web Application에서 관리된 영역으로써 Spring Boot Framwork에서 client로 부터 오는 요청/응답에 대해 최초/최종 단계의 위치에 존재하며 이를 통해서 요청/응답의 정보를 변경하거나, Spring에 의해서 데이터가 변환되기 전의 순수한 Client의 요청/응답 값을 확인 할 수 있음
- 유일하게 ServletRequest, SevletResponse의 객체를 변환 할 수 있음
- 주로 Spring Framework에서는 request / response의 logging 용도로 활용
- 인증과 관련된 Logic 들을 해당 Filter에서 처리를 함으로 선/후 처리라고 함
- Service business logic과 분리
## 2) Interceptor
- Filter와 매우 유사형태로 
- 차이점은 Spring Context에 등록ㄷㅁ
- AOP와 유사한 기능을 제공함
- 주로 `인증 단계` 처리하거나, Logging를 하는데 사용
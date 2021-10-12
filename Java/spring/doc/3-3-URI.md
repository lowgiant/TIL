# 3-3-URI 설계 패턴
## 1) URI(Uniform Resource identifier)
- 인터넷에서 특정 자원을 나타내는 주소 값
- 해당값은 유일함(응답은 달라질 수 있음)
- 요청
  - https://www.foo.co.kr/resource/sample/1
- 응답
  - foo.pdf, foo.pdf.doc
## 2) URL(Uniform Resource Lcoator)
- 인터넷 상에서 자원, 특정 파일이 어디에 위치하는지 식별하는 주소
- 요청
  - https://www.foo.co.kr/foo.pdf
- URL은 URI의 `하위 개념`
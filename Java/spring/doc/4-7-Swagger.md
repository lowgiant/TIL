# Swagger
## 1) 특징
- 개발한 REST API를 편리하게 문서화 해줌
- 관리 및 제 3의 사용자가 편리하게 API를 호출해보고 테스트 할 수 있는 프로젝트
## 2) 설정
- spring boot에서는 springfox-boot-starter를 gradle dependencies에 추가해 사용
## 3) 주의할점
- 운영환경과 같은 외부에 노출되면 안되는 곳에는 사용할댄 주의해야함
## 4) Annotation
Annotation | 설명
--- | --- 
@Api | 클래스를 스웨거의 리소스로 표시
@ApiOperation | 특정 경로의 오퍼레이션 HTTP 메소드 설명
@ApiParam | 오퍼레이션 파라미터에 메타 데이터 설명
@ApiResponse | 오퍼레이션의 응답 지정
@ApiModelProperty | 모델의 속성 데이터를 설명
@ApilmplicitParam | 메소드 단위의 오퍼레이션 파라미터 설명 
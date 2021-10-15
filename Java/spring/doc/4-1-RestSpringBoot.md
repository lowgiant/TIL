# 4-1-Rest Spring Boot
## 1) 장점
- 프로덕션 제품 수준의 스프링 기반 어플리케이션을 쉽게 만듬
- 간단한 설정으로 개발 및 커스텀이 가능
- 대규모프로젝트(운영환경)에 필요한 비 기능적 기능 제공
- 오랜 경험에서 나온 안정적인 운영 가능
- Spring 구성이 거의 필요하지 않음(XML 설정)
- java -jar로 실행한 java 어플리케이션을 만들 수 있음

## 2) GET
- @GetMapping
  - Get Resource 설정
- @RequestParam
  - URL Query Param Parsing
- @PathVariable
  - URL Path Variable Parsing
- Object
  - Query Param Object로 Parsing
- @RestController
  - Rest API 설정
- @RequestMapping
  - 리소스를 설정(method로 구분가능)

## 3) POST
어노테이션 | 설명
--- | --- 
@RestController | Rest API 설정
@RequestMapping | 리소스를 설정(method 구분가능)
@PostMapping | Post Resource
@RequestBody | Request Body 부분 Parsing
@PathVariable | URL Path Variable Parsing
@JsonProperty | json naming
@JsonNaming | class json naming

## 4) PUT
어노테이션 | 설명
--- | --- 
@RestController | Rest API설정
@RequestMapping | 리소스를 설정 (method로 구분가능)
@PutMapping | Put Resource 설정
@RequestBody | Request Body 부분 Parsing
@PathVariable | URL Path Variable Parsing

## 4) DELETE
어노테이션 | 설명
--- | --- 
@RestController | Rest API설정
@RequestMapping | 리소스를 설정 (method로 구분가능)
@DeleteMapping | Delete Resource
@RequestParam | URL Query Param Parsing
@PathVariable | URL Path Variable Parsing
Object | Query Param Object로 Parsing

## 5) Response 내려주기
어노테이션 | 설명
--- | --- 
string | 일반 Text Type 응답
object | 자동으로 Json 변환돼 응답 상태값은 항상 200 ok
ResponseEntity | Body의 내용을 object로 설정 상황에 따라 Http Status Code설정
@ResponseBody | RestController가 아닌곳에서 Json 응답을 내릴 때
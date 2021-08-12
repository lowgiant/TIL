# OS basic

## 01-운영체제(Operating System) 역할
### 1. 시스템 자원(System Resource)관리자
- 시스템 자원은 `컴퓨터 하드웨어`
  - CPU, Memory
  - I/0 Devices(입출력장치)
    - Monitor, Mouse, Keyboard, Network
  - 저장매체: SSD, HDD(Hard Disk)
### 2. 필요한 이유
> 컴퓨터 하드웨어는 스스로 할 수 있는 것은 없음
- CPU: 각 프로그램이 얼마나 CPU를 사용할지를 결정 못함
- Memory: 각 프로그램이 어느 주소에 저장되어야하는지, 어느정도 메모리에 확보해줘야 하는지 결정 못함
- 저장매체: 어떻게, 어디에 저장할지 결정 못함
- 입력장치: 스스로 무엇을 표시 못함
### 3. 대표적인 운영체제
- Window 
- Mac
- UNIX and LINUX
### 4. 역할
1. 응용프로그램 제어
2. 쉘 및 UI interface: GUI, Batch, Command Line
3. 시스템 콜(System Call)
4. 시스템 자원
   - 프로세스 관리(Process Management)
   - 주기억장치 관리(Main Memory Management)
   - 파일 관리(File Management)
   - 디스크 관리(Disk Management)
   - 입출력 관리(I/O Management)
   - 네트워킹 및 보호/보안(Networking, Protection)

## 02-응용 프로그램
### 1. 특징
- 소프트웨어는 운영체제, 엑셀 등 `다양한 프로그램`을 말함
### 2. 운영체제와 응용프로그램의 관계
- 운영체제의 응용 프로그램을 `관리`
  - 실행
  - 권환 관리
  - 관리자 권한으로 실행 
  - 사용자 관리(로그인)
### 3. 관리하는 이유
- 누구나 만들 수 있음(문제점)
  - 무한 반복문 등 잘 못 작성해 프로그램 다운
  - 모든 파일 삭제막기(권한/사용자 관리)
  - 한 프로그램이 CPU를 독점

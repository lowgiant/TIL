# Circular Queue
## 1) 특징
- 큐의 처음과 끝을 연결해 원형으로 표현한 방법
- 선형 큐에서 `Queue-Full` 신호 발생시 과부화 문제 해결
- Overflow 발생시 데이터를 이동하지 않고 비어 있는 맨 처음 데이터 입력
- 원형 큐가 비어 있는 경우와 가득 찬 경우 둘다 `Front = Rear`인 관계
- Overflow와 Underflow의 구별이 불가능
## 2) 원형 큐에서 포인터 값 증 가
- 자료 입력 할때는 나머지 연산자로 Front, Rear 값 결정
- 나머지 연산자를 사용함으로 써 n개의 원소인 경우 
  - 위치번호는 0부터 n-1
## 3) 삽입
1.  삽입 할 경우 rear의 위치를 증가
2.  front = rear `포화 검사`
3.  다르면 큐에 값을 삽입
    ```c
    read<- (rear+1) mod n;
    if front =rear then call Queue is full;
    else{
        Q(rear) <-item;
    ```    
    }
## 4) 삭제
1. front = rear `공백 검사`
2. 다르면, front 증가시켜 위치의 원소 삭제
    ```c
    if front = rear then Queue is empty;
    else {
        front<-(front +1) mod n;
        Q(front) 삭제;
    }
    ```
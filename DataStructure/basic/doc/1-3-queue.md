# Queue
## 1) 특징
- 먼저 입력된 데이터가 먼저 출력됨(`FIFO`)
- 데이터의 삽입과 삭제가 서로 다른 곳에서 이루어지는 구조
- 리스트 한쪽(rear)에서는 삽입, 다른 한쪽(front)에서 삭제 작업
- 큐에 새로운 데이터를 삽입될 때는 rear 포인터가 가리키는 한쪽 끝에서만 삽입이 일어나 rear 포인터 증가
- 큐의 특정 원소가 삭제될 때는 front 포인터에서 삭제가 수행돼 front 포인터가 증가
- 운영체제의 `작업 스케줄링, 버퍼 관리` 등에 사용됨
## 2) 삽입 알고리즘
```c
if rear = then call Queue is full;
else {
    rear <- rear + 1;
    Q(rear)<- item;
}
```
## 3) 삭제 알고리즘
```c
if front = rear then call Queue is empty;
else {
    front <- front + 1
    Q(front) 삭제;
}
```
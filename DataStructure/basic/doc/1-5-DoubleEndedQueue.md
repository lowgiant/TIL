# Double Ended Queue
## 1) 특징 
- 데이터 삽입과 삭제가 리스트의 양쪽 끝에 모두 수행되는 구조
- 스택과 큐를 혼합한 형태
- 2개의 스택의 bottom 부분이 서로 연결된 형태
## 2) 종류
1. 스크롤(Scroll)
    - 새로운 데이터의 삽입이 리스트의 한쪽 끝에서만 가능하도록 제한한것
    - `입력 제한 데크` 또는 `스크롤`이라고 함
2. 셀프(Shelf)
    - 특정 데이터의 삭제를 리스트의 한쪽 끝에서만 가능하도록 제한 한 것
    - `출력 제한 데크` 또는 `셀프`라고 함
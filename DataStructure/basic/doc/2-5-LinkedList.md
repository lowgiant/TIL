# 인접 리스트
## 1) 특징
- 각 정점에 대한 인접 정점들을 연해 만든 단순 연결 리스트
## 1) 표현
1. 무방향 그래프의 인접 리스트 표현(n개의 정점, e개의 간선)
    - 헤드 노드 배열의 크기: n
    - 연결하는 노드의 수: 2e
    - 각 정점의 헤드에 연결된 노드의 수: 정점의 차수
2. 방향 그래프의 인접 리스트 표현(n개의 정점, e개의 간선)
    - 헤드 노드 배열의 크기: n
    - 연결하는 노드의 수: 2e
    - 각 정점의 헤드에 연결된 노드의 수: 진출차수

# Sorting
## 1) 특징
- 순서 없이 배열된 자료를 작은 것 부터 큰것의 순서인 `오름차순` 반대인 `내림차순`으로 재배열 
- 알고리즘의 성능 개선이 될 수 있음
## 2) 고려사항
- 키값들의 분포상태
- 소요 공간 및 작업 시간
- 정렬에 필요한 기억 공간의 크키
- 데이터의 양
- 사용 컴퓨터 시스템의 특성
## #) 종류
1. 삽입 정렬
    - 정렬되어 있는 부분집합에 정렬할 새로운 원소의 위치를 찾아 삽입하는 방법
    - 메모리 사용공간: n개의 원소에 대해 n개의 메모리 사용
    - 최선경우 시간 복잡도: O(n)
    - 최악경우 시간 복작도: O(n²)
    - 삽입 정렬의 평균 비교 횟수 = n(n-1)/4 
2. 셀 정렬
    - 일정한 간격으로 떨어져 있는 자료들끼리 부분 리스트를 구성하고 각 부분리스트에 있는 원소들에 대해 삽입정렬을 수행하는 작업을 반복
    - 메모리 사용공간: n개의 원소에 대해 n개의 메모리와 매개변수 h에 대한 저장공간을 사용
    - 일반적인 시간복잡도 n¹'⁵
3. 퀵 정렬
    - 정렬을 수행하지 않고, 기준값을 중심으로 부분해 정렬하는 방법
    - 메모리 사용공간: n개의 원소에 대해 n개의 메모리 사용
    - 평균 시간복잡도: O(nlog₂n)
4. 버블 정렬
    - 이웃하는 데이터를 비교해 작은 데이터를 앞쪽으로 이동시키는 과정을 반복해 정렬하는 알고리즘
    - 최악경우 시간 복작도: O(n²)
5. 합병 정렬
    - 여러 개의 정렬된 자료의 집합을 합병해 한 개의 정렬된 집합으로 만드는 방법
    - 평균 시간복잡도: O(nlog₂n)
6. 히프 정렬
    - 히프를 사용해 정렬하는 알고리즘
    - 평균 시간복잡도: O(nlog₂n)
7. 선택 정렬
    - 전체 원소 중에서 기준 위치에 맞는 원소를 선택해 자리를 교환하는 방식으로 정렬
    - 최악경우 시간 복작도: O(n²)
8. 기수 정렬
    - 각 자릿수별로 정렬하는 알고리즘
    - 시간복잡도: O(d(n+r))
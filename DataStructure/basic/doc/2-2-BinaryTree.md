# Binary Tree
## 1) 특징
- 모든 노의 차수가 2를 넘지 않는 특수한 트리
- 하나의 노드는 2개의 자식 노드를 가질 수 있다.
- 서브트리에서 왼쪽노드, 오른쪽 노드라는 순서를 구별함
## 2) 종류
1. 정이진 트리(Full Binary Tree)
    - 깊이가 k인 이진트리에서 총 노드의 수가 (2^k)-1인 트리를 말함
    - 레벨 l에서 2^l-1개의 노드를 가진 트리이다.
2. 전이진 트리(Complete Binary Tree)
    - 정이진 트리의 각 노드에 붙인 1~n의 일련 번호와 1:1로 대응 되는 트리
    - 왼쪽에서 오른쪽으로 채워진 이진트리
    - 중간에 비워 있으면 안됨
3. 사항 이진 트리(skewed binary tree)
    - 왼쪽이나 오른쪽으로만 치우쳐진 트리
    - 왼쪽 또는 오른쪽 서브트리가 모두 공백인 트리
## 3) 운행방법
- 트리를 구성하는 각 노드들을 한 번씩만 방문하는 방법
- 이진 트리 운행법은 산술식의 표기법과 관련 있음
- 데이터가 찾아지는 순서 따른 순회 방법
    1. 전위순회(preorder): root - left - right
    2. 중위순회(inorder): left - root - right
    3. 후위순회(postorder): left - right - root
## 4) 경로 길이
1. 내부경로길이(internal Path Length)
    - 근노드에서 각 노드에 이르는 경로의 총합
2. 외부경로길이(External Path Length)
    - 원래의 이진트리에서 노드의 null 링크에 새로운 단말을 추가해 이들 단말노드에 이르는 경로의 총합
    - 노드의수가 n일 때 내부 경로 길이를 I, 외부 경로 길이를 E
      - 관계식 `E = I + 2 `
## 5) 기타 트리
1. 쓰레드 이진 트리(thread binary tree)
   - 이진 트리 운행 알고리즘에서 `낭비되는 null` 링크를 활용한 방법
   - 널 링크를 트리 내의 다른 노드를 가리키는 포인터로 사용하는 트리
2. 힙(Heap)
   - 완전 이진 트리로 `우선 순위 큐`를 구현하는데 사용
   - 종류 
     1. 최대힙
         - 루트에 각 노드의 키 값이 큰 것이 위치
     2. 최소힙
         - 루트에 각 노드의 키 값이 작은 것이 위치 


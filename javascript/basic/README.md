# Javascript basic

## 01-Hello wolrd
- 출력문
    ```javascript
    console.log("Hello world")
    ```
- `세미콜론`(;)은 붙여도 되고 안 붙여됨

## 02-변수와 상수
1. 변수: 값이 변하는 수 
   - 같은 이름으로 동일하게 선언은 안됨
   - `let` 키워드 사용 
       ```javascript
       let value = 1
       console.log(value) // 1
       
       value = 2 
       console.log(value) // 2
       ```

2. 상수: 값이 안 변함
   - `const` 키워드 사용 
       ```javascript
       const value = 1
       console.log(value)
       ```
3. 데이터 타입
    1. 숫자(number)
        ```javascript
        const value = 1
        ``` 
    2. 문자열(string)
        - 작은 따옴표나 큰 따옴표 둘다 써도 됨
        - 단, 하나의 따옴표로 쭉 써야함.
        ```javascript
        const text = "hello"
        const name = "이름"
        ```
    3. 참/거짓(Boolean)
        - 참과 거짓으로 나누어짐.
        ```javascript
        const good = true
        const loading = false
        ```
    4. nill and undefined
        - 둘다 `없음`을 의미
        - `null`은 값이 없음
        - `undefined`은 값이 설정이 되지 않음.
        ```javascript
        //null 
        const friend = null 
        console.log(friend) // null
        //undefined
        let criminal; 
        conosole.log(criminal) // undefined
        ```

## 03-연산자
```javascript
let value = 1 // 변수 선언
value = 2     // 대입 연산자
```

1. 산술 연산자 

    종류 | 뜻 
    --- | ---
    \+ | 덧셈
    \- | 뺄셈
    \* | 곱셈
    \/ | 나눗셈

    ```javascript
    let a = 1 + 2  
    console.log(a) // 3

    a = 1 + 2 -(3*4) 
    console.log(a) // 0 

    let a = 1
    a++; 
    ++a;
    console.log(a)  // 3
    ```
2. 대입 연산자 
   - 값에 연산을 한 값을 바로 사용 할 수 있는 연산자 
   
    ```javascript
    let a = 1 
    a += 3
    a -= 3
    a *= 3
    a /= 3
    console.log(a)
    ```
3. 논리 연산자
- 불리언 타입을 위한 연산자
    종류 | 뜻 
    :---: | ---
    \! | NOT(반대로 표현)
    \&& | AND(둘다 참일때 참)
    \OR | OR(한쪽 참일때 참)

4. 비교 연산자
- 두 값을 비교 할 때 사용
    1. 두 값이 일치하는지 확인
        ```javascript
        const a = 1;
        const b = 1;
        const equals =  a === b;
        console.log(equals) // true

        const a = 0;
        const b = false;
        const equals =  a == b;
        console.log(equals) // true
        ```
    2. 두 값이 일치하지 않는지 확인
        ```javascript
        const value = 'a' !== 'b';
        console.log(value);
        ```
    3. 크고 작음
        ```javascript
        const a = 10;
        const b = 15;
        const c = 15;

        console.log(a < b);  // true
        console.log(b > a);  // true
        console.log(b >= c); // true
        console.log(a <= c); // true
        console.log(b < c);  // false;
        ```
5. 문자열 붙이기
- +로 할 수 있음
    ```javascript
    const a = '안녕';
    const b = '하세요';
    console.log(a + b); // 안녕하세요
    ```

## 04-조건문 
1. if문
- ~하다면 ~를 해라
- `조건을 만족`해야지 안에 코드가 실행이 됨.
    ```javascript
    const a= 1;
    if (a+1 === 2){
        console.log('a + 1이 2입니다.')
    }
    ```
2. if-else문
- ~하다면 ~하고, 그렇지 않다면 ~해라
    ```javascript
    const a = 10;
    if (a > 15) {
        console.log('a 가 15 큽니다.');
    } else {
        console.log('a 가 15보다 크지 않습니다.');
    }
    ```
3. if-else if문
- 여러 조건에 따라 작업
  ```javascript
    const a = 10;
    if (a === 5) {
        console.log('5입니다!');
    } else if (a === 10) {
        console.log('10입니다!');
    } else {
        console.log('5도 아니고 10도 아닙니다.');
    }
  ```
4. switch/case 문
- 조건이 많을 경우 사용
    ```javascript
    const device = 'iphone';
    switch (device) {
    case 'iphone':
        console.log('아이폰!');
        break;
    case 'ipad':
        console.log('아이패드!');
        break;
    case 'galaxy note':
        console.log('갤럭시 노트!');
        break;
    default:
        console.log('모르겠네요..');
    }
    ```

## 05-함수
1. 함수
   - `특정 코드`를 `하나의 명령`으로 실행
        ```javascript
        // 변수로 더하기
        const a = 1;
        const b = 2;
        const sum = a + b;
        console.log(sum); //3 

        // 함수로 만들기
        function add(a, b) {
            return a + b;
        }
        const sum = add(1, 2);
        console.log(sum); // 3 
        ```
2. 화살표 함수
    - 기존 함수 선언을 간소화
        ```javascript
        const add = (a, b) => {
        return a + b;
        };

        console.log(add(1, 2));
        ```

## 06-객체
1. 객체
- 변수 및 상수에 하나의 이름에 `여러 종류의 값`을 넣는 것
- `{키: 값}` 형식
    ```javascript
    const dog = {
        name: '멍멍이',
        age: 2
    };

    console.log(dog.name);
    console.log(dog.age);
    ```
2. 함수에서 객체를 파라미터로 받기
    ```javascript
    const ironMan = {
        name: '토니 스타크',
        actor: '로버트 다우니 주니어',
        alias: '아이언맨'
    };

    const captainAmerica = {
        name: '스티븐 로저스',
        actor: '크리스 에반스',
        alias: '캡틴 아메리카'
    };

    function print(hero) {
    const text = `${hero.alias}(${hero.name}) 역할을 맡은 배우는 ${
        hero.actor
    } 입니다.`;
    console.log(text);
    }

    print(ironMan);
    print(captainAmerica);
    ```
3. 객체 비 구조화
- 객체의 내부의 값을 조회 할 때 유용
    ```javascript
    const ironMan = {
    name: '토니 스타크',
    actor: '로버트 다우니 주니어',
    alias: '아이언맨'
    };

    const captainAmerica = {
    name: '스티븐 로저스',
    actor: '크리스 에반스',
    alias: '캡틴 아메리카'
    };

    function print(hero) {
    const { alias, name, actor } = hero;
    const text = `${alias}(${name}) 역할을 맡은 배우는 ${actor} 입니다.`;
    console.log(text);
    }

    print(ironMan);
    print(captainAmerica);
    ```
4. 객체 안에 함수 넣기
- 화살표 함수로 선언은 작동 안됨
    ```javascript
    const dog = {
    name: '멍멍이',
    sound: '멍멍!',
    say: function() {
        console.log(this.sound);
    }
    };

    dog.say();
    ```
5. Getter 함수와 Setter함수
- 특정 값을 바꾸거나 조회할 때 사용
    ```javascript
    const numbers = {
    _a: 1,
    _b: 2,
    sum: 3,
    calculate() {
        console.log('calculate');
        this.sum = this._a + this._b;
    },
    get a() {
        return this._a;
    },
    get b() {
        return this._b;
    },
    set a(value) {
        console.log('a가 바뀝니다.');
        this._a = value;
        this.calculate();
    },
    set b(value) {
        console.log('b가 바뀝니다.');
        this._b = value;
        this.calculate();
    }
    };

    console.log(numbers.sum);
    numbers.a = 5;
    numbers.b = 7;
    numbers.a = 9;
    console.log(numbers.sum);
    console.log(numbers.sum);
    console.log(numbers.sum);
    ```

## 07-배열
- 여러개의 항목이 들어 있음.

1. 항목 추가
    - 내장 함수인 `push()`를 사용
        ```javascript
        const objects = [{ name: '멍멍이' }, { name: '야옹이' }];

        objects.push({
        name: '멍뭉이'
        });

        console.log(objects);
        ```
2. 크기 확인
   - `length`로 확인
        ```javascript
        const objects = [{ name: '멍멍이' }, { name: '야옹이' }];

        console.log(objects.length);

        objects.push({
        name: '멍뭉이'
        });

        console.log(objects.length);
        ```

## 08-반복문
- 특정한 작업을 반복적으로 수행
  
1. for문
    - 특정 값에 변화를 주어 정한 조건이 만족 될때까지 반복
    ```javascript
    for (let i = 0; i < 10; i++) {
        console.log(i);
    }
    ```
2. 배열 for 활용
    - 배열의 각 원소를 하나씩 나열
    ```javascript
    const names = ['멍멍이', '야옹이', '멍뭉이'];

    for (let i = 0; i < names.length; i++) {
        console.log(names[i]);
    }
    ```
3. while문
    - 조건이 참이면 계속 반복
        ```javascript
        let i = 0
        while(i<10){
            console.log(i);
            i++;
        }
        ```
4. for..or
    - 배열를 위한 반복문
        ```javascript
        let numbers = [10,20,30,40];
        for (let number of numbers){
            console.log(number)
        }
        ```
5. for...in
    - 객체를 위한 반복문
        ```javascript
        const doggy = {
            name: '멍멍이',
            sound: '멍멍',
            age: 2
        };

        for (let key in doggy) {
            console.log(`${key}: ${doggy[key]}`);
        }
        ```
6. break와 continue
    - 반복문에서 멈추고 싶을 때 `break` 
    - 특정 조건을 벗어나고 싶을 때 `continue`
        ```javascript
        for (let i = 0; i < 10; i++) {
            if (i === 2) continue; // 다음 루프를 실행
            console.log(i);
            if (i === 5) break; // 반복문을 끝내기
        }
        ```

## 09-배열 내장함수
1. forEach
    - 배열 원소 반복문
    - 함수형태의 파라미터를 전달함(`콜백함수`)
    - break문 사용 못함
        ```javascript
        const superheroes = ['아이언맨', '캡틴 아메리카', '토르', '닥터 스트레인지'];

        superheroes.forEach(hero => {
            console.log(hero);
        });
        ```
2. map
    - 배열 원소를 `한꺼번에 값을 변경` 할때 씀
        ```javascript
        const array = [1, 2, 3, 4, 5, 6, 7, 8];

        const squared = array.map(n => n * n);
        console.log(squared);
        ```
3. indexOf
    - 원하는 항목이 `몇번째 원소인지 찾아줌`
        ```javascript
        const superheroes = ['아이언맨', '캡틴 아메리카', '토르', '닥터 스트레인지'];
        const index = superheroes.indexOf('토르');
        console.log(index);
        ```
4. findIndex
   - 배열 안의 특정 조건의 객체의 값을 찾아 `인덱스` 반환 
    ```javascript
        const todos = [
    {
        id: 1,
        text: '자바스크립트 입문',
        done: true
    },
    {
        id: 2,
        text: '함수 배우기',
        done: true
    },
    {
        id: 3,
        text: '객체와 배열 배우기',
        done: true
    },
    {
        id: 4,
        text: '배열 내장함수 배우기',
        done: false
    }
    ];

    const index = todos.findIndex(todo => todo.id === 3);
    console.log(index);
    ```
5. find
    - 배열 안의 특정 조건의 객체의 값을 찾아 `객체` 반환
6. filter
    - 특정 조건을 만족하는 값들을 `새로운 배열`로 만듬
        ```javascript
        const todos = [
            {
                id: 1,
                text: '자바스크립트 입문',
                done: true
            },
            {
                id: 2,
                text: '함수 배우기',
                done: true
            },
            {
                id: 3,
                text: '객체와 배열 배우기',
                done: true
            },
            {
                id: 4,
                text: '배열 내장함수 배우기',
                done: false
            }
        ];
        const tasksNotDone = todos.filter(todo => todo.done === false);
        console.log(tasksNotDone);
        ```
7. spliec
    - 배열의 특정 인덱스 `항목 제거`
        ```javascript
        const numbers = [10, 20, 30, 40];
        const index = numbers.indexOf(30);
        numbers.splice(index, 1);
        console.log(numbers);
        ```
8. slice
    - 배열의 인덱스 기준으로 `자름`
        ```javascript
        const numbers = [10, 20, 30, 40];
        const sliced = numbers.slice(0, 2); // 0부터 시작해서 2전까지

        console.log(sliced); // [10, 20]
        console.log(numbers); // [10, 20, 30, 40]
        ```
9. shift
    - 배열의 `첫번째` 원소 추출
        ```javascript
        const numbers = [10, 20, 30, 40];
        const value = numbers.shift();
        console.log(value);
        console.log(numbers);
        ```
10. pop
    - 배열의 `마지막` 원소 추출
        ```javascript
        const numbers = [10, 20, 30, 40];
        const value = numbers.pop();
        console.log(value);
        console.log(numbers);
        ```
11. unshift
    - 배열의 `맨앞`에 원소추가
        ```javascript
        const numbers = [10, 20, 30, 40];
        numbers.unshift(5);
        console.log(numbers);
        ```
12. concat
    - 여러개의 배열을 `하나로 합쳐줌`
       ```javascript
        const arr1 = [1, 2, 3];
        const arr2 = [4, 5, 6];
        const concated = arr1.concat(arr2);

        console.log(concated);
       ```
13. join
    - 배열 안의 값들을 문자열 형태로 합침
        ```javascript
        const array = [1, 2, 3, 4, 5];
        console.log(array.join()); // 1,2,3,4,5
        console.log(array.join(' ')); // 1 2 3 4 5
        console.log(array.join(', ')); // 1, 2, 3, 4, 5
        ```
14. reduce
    - 배열 처음 부터 끝까지 반복하면서 콜백함수 호출
        ```javascript  
        const numbers = [1, 2, 3, 4, 5];
        let sum = numbers.reduce((accumulator, current) => {
            console.log({ accumulator, current });
        return accumulator + current;
        }, 0);

        console.log(sum);
        ```
## 10-프로토타입과 클래스
1. 객체 생성자
    - 함수를 통해 새로운 객체 만듬
    - 객체 안에 넣고 싶은 값, 함수 구현
        ```javascript
        function Animal(type, name, sound) {
        this.type = type;
        this.name = name;
        this.sound = sound;
        this.say = function() {
            console.log(this.sound);
        };
        }

        const dog = new Animal('개', '멍멍이', '멍멍');
        const cat = new Animal('고양이', '야옹이', '야옹');

        dog.say();
        cat.say();
        ```
2. 프로토타입
    - 객체 생성자의 초기값 설정
 
        ```javascript
        function Animal(type, name, sound) {
        this.type = type;
        this.name = name;
        this.sound = sound;
        }

        Animal.prototype.say = function() {
            console.log(this.sound); 
        };
        Animal.prototype.sharedValue = 1;

        const dog = new Animal('개', '멍멍이', '멍멍');
        const cat = new Animal('고양이', '야옹이', '야옹');

        dog.say(); // 멍멍
        cat.say(); // 야옹

        console.log(dog.sharedValue); // 1
        console.log(cat.sharedValue); // 1
        ```
3. 객체 생성자 상속받기
    - .call(this,~)를 사용
    - prototype 따로 연결
        ```javascript
        function Animal(type, name, sound) {
        this.type = type;
        this.name = name;
        this.sound = sound;
        }

        Animal.prototype.say = function() {
            console.log(this.sound);
        };
        Animal.prototype.sharedValue = 1;

        function Dog(name, sound) {
            Animal.call(this, '개', name, sound);
        }
        Dog.prototype = Animal.prototype;

        function Cat(name, sound) {
            Animal.call(this, '고양이', name, sound);
        }
        Cat.prototype = Animal.prototype;

        const dog = new Dog('멍멍이', '멍멍');
        const cat = new Cat('야옹이', '야옹');

        dog.say();
        cat.say();
        ```
4. 클래스
    - js에 없다가 ES6부터 문법 추가
        ```javascript
        class Animal {
        constructor(type, name, sound) {
            this.type = type;
            this.name = name;
            this.sound = sound;
        }
        }
        //상속 
        class Dog extends Animal {
        constructor(name, sound) {
            // 함수가 상속 받은 클래스의 생성자
            super('개', name, sound);
        }
        }

        class Cat extends Animal {
        constructor(name, sound) {
            super('고양이', name, sound);
        }
        }

        const dog = new Dog('멍멍이', '멍멍');
        const dog2 = new Dog('왈왈이', '왈왈');
        const cat = new Cat('야옹이', '야옹');
        const cat2 = new Cat('냐옹이', '냐옹');

        dog.say();
        dog2.say();
        cat.say();
        cat2.say();
        ```
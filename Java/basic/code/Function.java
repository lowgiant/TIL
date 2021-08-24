public class Function {
    public static int addNum(int num1, int num2){
        return num1 + num2;
    }

    public static void sayHello(String greeting){
        System.out.println(greeting);
    }
    public static int clacSum(){
        int sum = 0;
        int i;
        for(i = 0; i <=100; i++){
            sum +=1;
        }
        return sum;
    }

    public static void main(String[] args) {
        int n1 = 10;
        int n2 = 20;
        int total =addNum(n1, n2);

        sayHello("안녕하세요");
        int num = clacSum();
        System.out.println(total);
        System.out.println(num);
    }
}

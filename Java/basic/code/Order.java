public class Order {
    public String name;
    public int age;
    public String address;

    public Order(String name, int age, String address){
        this.name = name;
        this.age = age;
        this.address = address;
    }

    public String showOrderInfo(){
        return String.format("이름은 %s, 나이 %d, 주소는 %s", this.name, this.age, this.address);
    }
}

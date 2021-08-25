public class User {
    public int userId;
    public String userName;
    public int age;
    public int height;
    public int weight;

    public User(int userId,String userName,int age, int height, int weight){
        this.userId = userId;
        this.userName = userName;
        this.age = age;
        this.height = height;
        this.weight = weight;
    }

    public String UserInfo() {
        return "키가 " + Integer.toString(this.height) + "이고, 몸무게가 " + Integer.toString(weight) + "인 남성";
    }

}


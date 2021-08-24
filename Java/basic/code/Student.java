public class Student {
    public String studentName;
    public String address;

    public  Student(){
    }

    public Student(String studentName, String address){
        this.studentName = studentName;
        this.address = address;
    }

    public void showStudentInfo(){
        System.out.println(studentName+", " + address);
    }

}

public class StudentTest {
    public static void main(String[] args) {
        Student studentLee = new Student();
        studentLee.studentName = "이성계";
        studentLee.address = "조선";

        studentLee.showStudentInfo();

        Student studentKim = new Student();
        studentKim.studentName = "김유신";
        studentKim.address = "경주";

        studentKim.showStudentInfo();

        System.out.println(studentKim);
        System.out.println(studentLee);

        System.out.println("-----------");

        Student studentjin = new Student("진이", "광주");
        studentjin.showStudentInfo();
    }
}

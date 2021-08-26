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

        Student studentJin = new Student("진이", "광주");
        studentJin.showStudentInfo();

        Student studentPark = new Student(100, "Park");
        studentPark.setKoreaSubject("국어", 100);
        studentPark.setMathSubject("수학", 95);


        Student studentKing = new Student(101, "King");
        studentKing.setKoreaSubject("국어", 80);
        studentKing.setMathSubject("수학", 99);

        studentPark.showStudentSocre();
        studentKing.showStudentSocre();

    }
}

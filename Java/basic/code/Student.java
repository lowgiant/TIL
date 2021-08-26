public class Student {
    public String studentName;
    public String address;
    int studentId;

    Subject korea;
    Subject math;

    public  Student(){
    }

    public Student(String studentName, String address){
        this.studentName = studentName;
        this.address = address;
    }

    public Student(int id, String name){
        this.studentId  = id;
        this.studentName = name;

        korea = new Subject();
        math = new Subject();
    }

    public void setKoreaSubject(String name, int score){
        korea.subjectName = name;
        korea.score = score;
    }

    public void setMathSubject(String name, int score){
        math.subjectName = name;
        math.score = score;
    }

    public void showStudentInfo(){
        System.out.println(studentName+", " + address);
    }

    public void showStudentSocre(){
        int total = korea.score + math.score;
        String result = String.format("%s 학생의 총점은 %d 점입니다.", studentName, total);
        System.out.println(result);
    }

}

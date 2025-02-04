package SC2002.LAB1;
import java.util.Scanner;

public class l1q2 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter salary : ");
        int salary = s.nextInt();
        System.out.println("Enter merit : ");
        int merit = s.nextInt();
        s.close();

        Character grade = 'z';

        if (salary>=700 && salary<=899) {
            if (salary<=799) grade = merit<20 ? 'B' : 'A';
            else grade = 'A';
        } else if (salary>=600 && salary<=799) {
            if (salary<=649) grade = merit<10 ? 'C' : 'B';
        } else if (salary>=500 && salary<=649) {
            grade = 'C';
        } else {
            System.out.println("Unknown grade, salary less than 500");
            return;
        }

        System.out.println("Grade : " + grade);
    }
}

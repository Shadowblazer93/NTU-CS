package SC2002.LAB.LAB1;
import java.util.Scanner;

public class P3 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter start : ");
        int start = s.nextInt();
        System.out.println("Enter end : ");
        int end = s.nextInt();
        System.out.println("Enter increment : ");
        int incr = s.nextInt();
        s.close();

        if (start>end) {
            System.out.println("Error input!!");
            return;
        }

        // for loop
        System.out.println("US$         S$");
        System.out.println("--------------");

        for (int i=start;i<=end;i+=incr) {
            // if (i<10) System.out.print('0');
            System.out.println(i+"          "+i*1.82);
        }

        // while loop
        System.out.println();
        System.out.println("US$         S$");
        System.out.println("--------------");

        int j=start;
        while (j<=end) {
            if (j<10) System.out.print('0');
            System.out.println(j+"          "+j*1.82);
            j+=incr;
        }

        // d0-while loop
        System.out.println();
        System.out.println("US$         S$");
        System.out.println("--------------");

        int k=start;
        do {
            if (k<10) System.out.print('0');
            System.out.println(k+"          "+k*1.82);
            k+=incr;
        } while (k<=end);

    }
}
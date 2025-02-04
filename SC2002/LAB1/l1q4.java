package SC2002.LAB1;
import java.util.Scanner;

public class l1q4 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter height : ");
        int h = s.nextInt();
        s.close();

        int counter = 1;

        while (h>0) {
            String ch = (counter%2==1) ? "AA" : "BB";
            for (int i=0;i<counter;i++) {
                System.out.print(ch);
                ch = (ch=="BB") ? "AA" : "BB";
            }
            System.out.println();
            counter++;
            h--;
        }
    }
}
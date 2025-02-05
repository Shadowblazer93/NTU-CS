package SC2002.LAB1;

import java.util.Scanner;

public class P1 {
    public static void main(String[] args) {
        System.out.println("Enter a character : ");

        Scanner s = new Scanner(System.in);
        Character s1 = s.next().charAt(0);
        s.close();

        switch (s1) {
            case 'A':
            case 'a':
                System.out.println("Action movie fan\n");
                break;
            
            case 'C':
            case 'c':
                System.out.println("Comedy movie fan\n");
                break;
            
            case 'D':
            case 'd':
                System.out.println("Drama movie fan\n");
                break;

            default:
                System.out.println("Invalid choice\n");
        }
    }
}

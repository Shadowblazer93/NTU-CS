package SC2002.LAB.LAB2;
import java.util.Scanner;

public class Lab2p1 {
    public static void main(String[] args) {
        int choice;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Perform the following methods:");
            System.out.println("1: miltiplication test");
            System.out.println("2: quotient using division by subtraction");
            System.out.println("3: remainder using division by subtraction");
            System.out.println("4: count the number of digits");
            System.out.println("5: position of a digit");
            System.out.println("6: extract all odd digits");
            System.out.println("7: quit");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    mulTest();
                    break;
                case 2:
                    System.out.println("Enter dividend: ");
                    int div_m = sc.nextInt();
                    System.out.println("Enter divisor: ");
                    int div_n = sc.nextInt();
                    System.out.println("Quotient: " + divide(div_m,div_n));
                    break; 
                case 3:
                    System.out.println("Enter dividend: ");
                    int mod_m = sc.nextInt();
                    System.out.println("Enter divisor: ");
                    int mod_n = sc.nextInt();
                    System.out.println("Remainder: " + modulus(mod_m,mod_n));
                    break; 
                case 4:
                    System.out.println("Enter number: ");
                    int cd_n = sc.nextInt();
                    int cd = countDigits(cd_n);
                    if (cd==-1) System.out.println("The number must be a positive integer!");
                    else System.out.println("Number of digits: "+cd);
                    break;
                case 5:
                    System.out.println("Enter number: ");
                    int pos_n = sc.nextInt();
                    System.out.println("Enter digit to search for: ");
                    int pos_digit = sc.nextInt();
                    int pos_res = position(pos_n, pos_digit);
                    if (pos_res==-1) System.out.println("Digit not found (returned -1)");
                    else System.out.println("Digit found at position "+pos_res);
                    break; 
                case 6:
                    System.out.println("Enter number: ");
                    int odd_n = sc.nextInt();
                    long odd_res = extractOddDigits(odd_n);
                    if (odd_res==-2) System.out.println("The number must be positive!");
                    else System.out.println("Odd digits of number: "+odd_res);
                    break; 
                case 7: System.out.println("Program terminating ….");
            } 
        } while (choice < 7);
    } 

    public static void mulTest() {
        Scanner mulsc = new Scanner(System.in);
        int correct = 0;

        for (int i=0;i<5;i++) {
            int x = (int) (Math.random()*9)+1;
            int y = (int) (Math.random()*9)+1;

            System.out.println("How much is "+x+" times "+y+" ? ");
            int ans = mulsc.nextInt();
            if (ans==x*y) correct++;
        }

        System.out.println(correct+" answers out of 5 are correct.");
    }

    public static int divide(int m,int n) {
        int count = 0;
        while (m>=n) {
            m-=n;
            count++;
        }
        return count;
    }

    public static int modulus(int m,int n) {
        while (m>=n) m-=n;
        return m;
    }

    public static int countDigits(int n) {
        if (n<=0) return -1;

        int c=0;
        while (n>0) {
            c++;
            n/=10;
        }
        return c;
    }

    public static int position(int n,int digit) {
        int pos=1;
        boolean found = false;

        while (n>0) {
            if (n%10==digit) {
                found = true;
                break;
            }
            pos++;
            n/=10;
        }
        
        return found ? pos : -1;
    }

    public static long extractOddDigits(long n) {
        if (n<=0) return -2;
        
        long odds = 0;
        int degree = 1;
        while (n>0) {
            long r=n%10;
            if (r%2==1) {
                odds += r*degree;
                degree*=10;
            }
            n/=10;
        }
        return odds!=0 ? odds : -1;
    }
}
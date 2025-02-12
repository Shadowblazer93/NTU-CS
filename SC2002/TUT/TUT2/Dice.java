package SC2002.TUT.TUT2;
import java.util.Random;
import java.util.Scanner;

public class Dice {
    private int valueOfDice;

    public int rollDice() {
        Random rand = new Random();
        int roll = rand.nextInt(6)+1;
        this.valueOfDice = roll;
        return this.valueOfDice;
    }

    public static void main(String[] args) {
        Dice d = new Dice();
        int a = d.rollDice();
        int b = d.rollDice();
        Scanner s = new Scanner(System.in);
        System.out.println("Press any key to roll the first dice");
        s.next();
        System.out.println(a);
        System.out.println("Press any key to roll the second dice");
        s.next();
        System.out.println(b);
        System.out.println("Total score : "+(a+b));
    }
}

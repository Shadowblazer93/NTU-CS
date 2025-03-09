package SC2002.LAB.LAB3;
import java.util.Scanner;

public class PlaneApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Plane airPlane = new Plane();
        int choice = 0;

        System.out.println("(1) Show number of empty seats\n"
        +"(2) Show the list of empty seats\n"
        +"(3) Show the list of seat assignments by seat ID\n"
        +"(4) Show the list of seat assignments by customer ID\n"
        +"(5) Assign a customer to a seat\n"
        +"(6) Remove a seat assignment\n"
        +"(7) Exit\n");

        while (choice!=7) {
            System.out.println("Enter the number of your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    airPlane.showNumEmptySeats();
                    break;
                case 2:
                    airPlane.showEmptySeats();
                    break;
                case 3:
                    airPlane.showAssignedSeats(true);
                    break;
                case 4:
                    airPlane.showAssignedSeats(false);
                    break;
                case 5:
                    int seatid,custid;
                    System.out.println("Assigning Seat ..\n");
                    System.out.println("Please enter SeatID: ");
                    seatid = sc.nextInt();
                    System.out.println("Please enter Customer ID: ");
                    custid = sc.nextInt();
                    airPlane.assignSeat(seatid, custid);
                    break;
                case 6:
                    int unassign_seatid;
                    System.out.println("Enter SeatID to unassign customer from: ");
                    unassign_seatid = sc.nextInt();
                    airPlane.unAssignSeat(unassign_seatid);
                    break;
                case 7:
                    break;
                default:
                    System.out.println("Unknown choice!\n");
                    break;
            }
        }
    }
}

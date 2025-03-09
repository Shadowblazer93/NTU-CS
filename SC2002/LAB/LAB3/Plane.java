package SC2002.LAB.LAB3;

public class Plane {
    private PlaneSeat[] seat;
    private int numEmptySeat;

    public Plane() {
        seat = new PlaneSeat[12];
        for (int i=0;i<seat.length;i++) {seat[i] = new PlaneSeat(i+1);}
        numEmptySeat = 12;

    }

    
    private PlaneSeat sortSeats() {

    }

    public void showNumEmptySeats() {System.out.println("There are "+numEmptySeat+" empty seats");}

    public void showEmptySeats() {
        System.out.println("The following seats are empty:");
        for (int i=0;i<seat.length;i++) {
            if (!seat[i].isOccupied()) {System.out.println("SeatID "+seat[i].getSeatID());}
        }
    }

    public void showAssignedSeats(boolean bySeatId) {}

    public void assignSeat(int seatId, int cust_id) {
        if (seat[seatId-1].isOccupied()) {System.out.println("Seat already assigned to a customer");}
        else {
            seat[seatId-1].assign(cust_id);
            System.out.println("Seat Assigned!");
            numEmptySeat--;
        }
    }

    public void unAssignSeat(int seatId) {
        seat[seatId-1].unAssign();
        System.out.println("Seat Unassigned!");
        numEmptySeat++;
    }
}

package SC2002.LAB.LAB3;

public class Plane {
    private PlaneSeat[] seat;
    private int numEmptySeat;

    public Plane() {
        seat = new PlaneSeat[12];
        for (int i=0;i<seat.length;i++) {seat[i] = new PlaneSeat(i+1);}
        numEmptySeat = 12;
    }

    private PlaneSeat[] sortSeats() {
        PlaneSeat[] seatcopy = new PlaneSeat[12];
        PlaneSeat temp;
        for (int i=0;i<seat.length;i++) {seatcopy[i] = seat[i];}

        for (int i=0;i<seatcopy.length-1;i++) {
            boolean swap = false;
            for (int j=0;j<seatcopy.length-i-1;j++) {
                if (seatcopy[j].getCustomerID()>seatcopy[j+1].getCustomerID()) {
                    temp = seatcopy[j];
                    seatcopy[j] = seatcopy[j+1];
                    seatcopy[j+1] = temp;
                    swap = true;
                } 
            }
            if (!swap) {break;}
        }
        return seatcopy;
    }

    public void showNumEmptySeats() {System.out.println("There are "+numEmptySeat+" empty seats");}

    public void showEmptySeats() {
        System.out.println("The following seats are empty:");
        for (int i=0;i<seat.length;i++) {
            if (!seat[i].isOccupied()) {System.out.println("SeatID "+seat[i].getSeatID());}
        }
    }

    public void showAssignedSeats(boolean bySeatId) {
        if (bySeatId) {
            for (int i=0;i<seat.length;i++) {
                if (seat[i].isOccupied()) {
                    System.out.println("SeatID "+seat[i].getSeatID()+" assigned to CustomerID "+seat[i].getCustomerID());
                }
            }
        } else {
            PlaneSeat[] sortedseat = this.sortSeats();

            for (int i=0;i<sortedseat.length;i++) {
                if (sortedseat[i].isOccupied()) {
                    System.out.println("SeatID "+sortedseat[i].getSeatID()+" assigned to CustomerID "+sortedseat[i].getCustomerID());
                }
            }
        }
    }

    public void assignSeat(int seatId, int cust_id) {
        if (seatId<1 || seatId>12) {System.out.println("Invalid seat number!");return;}
        if (seat[seatId-1].isOccupied()) {System.out.println("Seat already assigned to a customer");}
        else {
            seat[seatId-1].assign(cust_id);
            System.out.println("Seat Assigned!");
            numEmptySeat--;
        }
    }

    public void unAssignSeat(int seatId) {
        if (seatId<1 || seatId>12) {System.out.println("Invalid seat number!");return;}
        if (!seat[seatId-1].isOccupied()) {System.out.println("Seat is already empty!");return;}
        seat[seatId-1].unAssign();
        System.out.println("Seat Unassigned!");
        numEmptySeat++;
    }
}

package SC2002.TUT1;
import java.util.Scanner;

public class q3 {
    public static void bubblesort(int arr[], int n) {
        boolean swapped;
        for (int i=n-2; i>-1; i--) {
            for (int j=0; j<i+1; j++) {
                if (arr[j]>arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swapped = true;
                }
            }
            if (swapped==false) break;
        }
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = s.nextInt();

        int arr[] = new int[n];
        for (int i=0;i<n;i++) {
            System.out.println("Enter value "+(i+1));
            arr[i] = s.nextInt();
        }

        s.close();
        bubblesort(arr, n);
        System.out.println("Sorted array: ");
        
        for (int i=0; i<n; i++) {System.out.println(arr[i] + " ");}
    }
}

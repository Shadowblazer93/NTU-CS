package SC2002.TUT1;

public class q3 {
    public static void bubblesort(int arr[], int n) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n-1; j++) {
                if (arr[j]>arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public static void main(String args[]) {
        int arr[] = {5,6,4,7,3,8,2,9,1,10};
        int n = arr.length;
        bubblesort(arr, n);
        System.out.println("Sorted array: ");
        
        for (int i=0; i<n; i++) {System.out.println(arr[i] + " ");}
    }
}

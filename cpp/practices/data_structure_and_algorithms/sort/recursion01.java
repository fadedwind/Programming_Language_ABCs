package sort;

public class recursion01 {

    //master theorem : T(N) = a * T(N/b) + O(N^d)

    //logb(a) < d   O(N^d)
    //logb(a) > d   O(N^logb(a))
    //logb(a) == d  O(N^d*logN)















    // recursion01 e.g.    get max

    public static int gatMax(int[] arr) {
        return process(arr, 0, arr.length - 1); 
    }
 
    // find the max in [L..R]

    public static int process(int[] arr,int L, int R) {
        if (L == R) {
            return arr[L];
        }
        int mid = L + ((R - L) >> 1);//midpoint
        int leftMax = process(arr, L, mid);
        int rightMax = process(arr, mid + 1, R);
        return Math.max(leftMax, rightMax); 

        // master : T(N) = 2*T(N/2) + O(1)
    }



}

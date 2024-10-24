package sort;

import java.util.Arrays;

public class SamllSum {

    public static int smallSum(int[] arr) {

        // arr dont need to be equenced if these is only one number
        if (arr == null || arr.length < 2) {
            return 0;
        }

        // more than one num? than do this function process
        return process(arr,0,arr.length-1);// arr,0,arr.length-1 means the arr starts from 0,end as arr.length-1 
    }
    
    // declare the function "proxess": sequnece and find the smallsum simutaneously
     public static int process(int[] arr, int l, int r) {
        if (l == r) {
            return 0;
        }

        int mid = l + ((r - l) >> 1);
        return process(arr, 1, mid) //left

        + process(arr, mid + 1, r) //right

        + merge(arr, l, mid, r);//when combing
        // more than one num?
     }

    public static int merge(int[] arr,int L, int m, int r) {
        int[] help = new int[r - L + 1];
        int i = 0;
        int p1 = L;
        int p2 = m + 1;

        int res = 0;

        while (p1 <= m && p2 <= r) {
            res += arr[p1] < arr[p2] ? (r -p2 + 1) * arr[p1] : 0;
            help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
        }
            while (p1 <= m) {
                help[i++] = arr[p1++]; 
            }

            while (p2 <= r) {
                help[i++] = arr[p2++];
            }
            
        for (i=0; i < help.length; i++) {
            arr[L + i] = help[i];
        }

        return res;
    }

    // similaely inverse order problem









    








    
     // FOR TEST !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // for test
    public static void comparator(int[] arr) {
        Arrays.sort(arr);
    }

    // for test
    public static int[] generateRandomArray(int maxSize, int maxValue) {
        
        // Math.random() :return a random decimal number in [0,1) with a same probability 
        // Math.random() * N :return a random decimal number in [0,N) with a same probability 
        // (int)Math.random() * N :return a random interger number in [0,N] with a same probability 
        int[] arr = new int[(int) ((maxSize + 1) * Math.random())];//random length
        for (int i = 0; i < arr.length; i++) {
            arr[i] = (int)((maxValue + 1) * Math.random()) - (int)(maxValue * Math.random());
        }
        return arr;
    }

    //for test
    public static int[] copyArray(int[] arr) {
        if (arr == null) {
            return null;
        }
        int[] res = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            res[i] = arr[i];
        }
        return res;
    }

    // for test
    public static boolean isEqual(int[] arr1, int[] arr2) {
        if ((arr1 == null && arr2 != null) || (arr1 != null && arr2 == null)) {
            return false;
        }
        if (arr1 == null && arr2 == null) {
            return true;
        }
        if (arr1.length != arr2.length) {
            return false;
        }
        for (int i = 0; i < arr1.length;i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }
        return true;
    }
    // for test
    public static void printArray(int[] arr) {
        if (arr == null) {
            return;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out .print(arr[i] + " ");
        } 
        System.out.println(); 
    }

    public static void main(String[] args) {
        int testTime = 500000;
        int maxSize = 100;
        int maxValue = 100;

        boolean succeed = true;
        
        for (int i = 0; i < testTime; i++) {
            int[] arr1 = generateRandomArray(maxSize, maxValue);
            int[] arr2 = copyArray(arr1);
            smallSum(arr1);
            comparator(arr2);

            if (!isEqual(arr1,arr2)) {
                // print arr2
                // print arr2
                succeed = false;
                break;
            }
        }
        System.out.println(succeed ? "Nice!" : "Fucking fucked!");

        int[] arr = generateRandomArray(maxSize, maxValue);
        printArray(arr);
        smallSum(arr);
        printArray(arr);

    }
    



    
}

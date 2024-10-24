package sort;

import java.util.Arrays;

public class BubbleSort {

    public static void bubbleSort(int[] arr) {
        if (arr == null || arr.length < 2) {
            return;
        }

        
        for (int e = arr.length - 1; e > 0; e--) {// 0~e
            for (int i = 0; i< e; i++) {
                if (arr[i] > arr[i + 1]) 
                // to see which is larger.if so,swap them
                {
                    swap(arr, i, i + 1);
                }
            }
        }
    }

    //swap the value between arr[i] and arr[j]
    public static void swap(int[] arr, int i, int j) {
        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];

        //&arr[i] != &arr[j]

        // a ^ b:
        // first,transform a,b to binary        
        // then do the addition without carry:
        //
        // a : 10110
        // b : 00111
        // ^ : 10001
        //
        //properties: 1. 0^N=N N^N=0
        // 2. swap and combination are okay
        //      a ^ b=b ^ a     (a^b)^c=a^(b^c)
        // 3.the order of ^ have no influence to the result

    }
    // // for example;



    // public static void printODDTIMESnum1(int [] arr) {
    //     int eor = 0;
    //     for (int cur : arr) {
    //         eor ^= cur;
    //     }
    //     System.out.println(eor);
    // }

    // public static void printODDTIMESnum2(int [] arr) {
    //     int eor = 0;
    //     for (int curNum : arr) // equal to for (i=0 ; i < arr.length;i++)
    //     {                      //  eor ^= arr[i];
    //         eor ^= curNum;
    //     }
    //     // eor = a ^ b
    //     // eor != 0
    //     // at least a position in eor is 1
    //     int rightOne = eor & (~eor + 1);// at least a 1,we choose the far right 1
    //     // negate eor : ~eor
    //     //we can get the rightmost 1 in this way
       
    //     int onlyOne = 0;// eor'
    //     for (int cur : arr) {
    //         if ((cur & rightOne) == 0) {
    //             onlyOne ^= cur;
    //         }
    //     }
    //     System.out.println(onlyOne + " " +(eor ^ onlyOne));
    // }


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
            
            bubbleSort(arr1);
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
        bubbleSort(arr);
        printArray(arr);

    }
   
}

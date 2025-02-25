package sort;

import java.util.Arrays;

public class SelectionSort{


    // 1.selectionSort
    public static void selectionSort(int[] arr) {
        if (arr == null || arr.length < 2) {
            return;
        }

        for (int i = 0; i < arr.length - 1; i++) { // i~ N-1
            int minIndex = i;
            for (int j = i + 1; j < arr.length; j++) {
                minIndex = arr[j] < arr[minIndex] ? j : minIndex;
            }
            // find the position pf the min value in i~ N-1
            swap(arr, i, minIndex);
            // swap the position between i and minIndex
            // need to decalre the function swap later.
        }
        // additional soace complexity:O(1) :i,j,minIndex
    }
    public static void swap(int[] arr, int i, int j){
        //use "void" to declare a function when need not a return value.
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
   











    
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
            
            selectionSort(arr1);
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
        selectionSort(arr);
        printArray(arr);

    }
    
 }
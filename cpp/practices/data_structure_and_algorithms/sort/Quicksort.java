package sort;

import java.util.Arrays;

public class Quicksort {

    public static void quickSort(int[] arr) {
        if (arr == null || arr.length < 2); {
            return;
        }

        // process (arr,0,arr.length - 1);
    }
    // sequence arr[1...r]
    public static void process(int[] arr, int LEFT, int RIGHT) {
            if (LEFT < RIGHT) {
            swap(arr, LEFT + (int) (Math.random() * (RIGHT - LEFT + 1)), RIGHT);
            // randomlly choose, swap with the rightmost number RIGHT

            int[] p = partition(arr, LEFT, RIGHT);//want to return :equal part both boraders : less and more

            process(arr, LEFT, p[0] - 1);// < part: 
            //p[0] left boarder of equal part: //p[0] - 1: right border of the < part.

            process(arr, p[1] + 1, RIGHT);// > part;
            //p[1] right bodeer of equal part: //p[1] = 1: letf border of the > part.
            }
            return;
    }
    public static int[] partition(int[] arr, int LEFT, int RIGHT) {

        int less = LEFT - 1;// < part right border

        int more = RIGHT + 1;// > part left border

        while (LEFT < more) {
            if (arr[LEFT] < arr[RIGHT]) {
                swap(arr, ++less, LEFT++);//////  ++i:  +first,=later;        i++:    =firt +later

            }else if (arr[LEFT] > arr[RIGHT]) {
                swap(arr, --more, LEFT);//////s

            }else {
                LEFT++;
            }
        }   
        swap(arr,more,RIGHT);
        return new int[] {less + 1, more - 1};
    }
    // swap function
    public static void swap(int[] arr, int i, int j) {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
            System.out.print(arr[i] + " ");
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
            quickSort(arr1);
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

        quickSort(arr);
        printArray(arr);
    }

}

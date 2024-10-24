//题目
//三层循环，过于复杂-----其中有太多重复运算

int maxSubArray(int* nums, int numsSize){
    //选起点，选终点，计算从起点到终点的和
    int max = nums[0];// 找最大值：“打擂台”,nums[0]为预选的初值

    for (int i = 0;i < numsSize; i++) {
        // i:0~numSize-1  0, 1,...,numsSize-1

        for (int j = i; j < numsSize; j++) {
            int sum = 0;
        // j: 0~numssize-1

            for (int k = i; k <= j; k++) {
                sum += nums[k];
            } 

            if (sum > max) {
                max = sum;    
            }
            printf("%d %d:%d (%d)\n", i, j, sum, max);
        }
    
    }
    return max;
    // 三层循环，太耗时间
}


// 两层循环的方法--
int maxSubArray(int* nums, int numsSize){
    //选起点，选终点，计算从起点到终点的和
    int max = nums[0];// 找最大值：“打擂台”,nums[0]为预选的初值

    for (int i = 0;i < numsSize; i++) {
        // i:0~numSize-1  0, 1,...,numsSize-1

        int sum = 0;

        for (int j = i; j < numsSize; j++) {

            // j: 0~numssize-1

            sum += nums[j];

            if (sum > max) {
                max = sum;    
            }
        }
    
    }
    return max;
}






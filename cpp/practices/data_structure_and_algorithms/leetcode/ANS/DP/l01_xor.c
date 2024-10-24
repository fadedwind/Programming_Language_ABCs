// solution 1 --- 
int singleNumber(int* nums, int numsSize){
   // *(nums + 0) == 2
   // nums[2] == *(nums + 2)

    for (int i = 0; i < numsSize; i++) {
       printf("%d\n", nums[i]);

       int count = 0;
       for (int j = 0; j < numsSize; j++) {
           if (nums[j] == nums[i]) {
               count++;
           }
       }

       if (count == 1) {
           return nums[i];
       }
    }
    return -1;
}


// solutuion 2 --    xor:异或
// a ^ a = 0
// a ^ b = b ^ a
// a ^ 0 = a
int singleNumber(int* nums, int numsSize){
    // every element appears twice except for one

    int n = nums[0];

    for (int i = 1; i < numsSize; i++) {
        n ^= nums[i];
    }
    return n;
}


//solution 3 
//只用一层循环，时间复杂度O(n)
int maxSubArray(int* nums, const int numsSize){
    //选起点，选终点，计算从起点到终点的和
    // 找最大值：“打擂台”,nums[0]为预选的初值
    
    int *dp;
    dp[0] = nums[0];

    for (int i = 1;i < numsSize; i++) {
        // i:0~numSize-1  0, 1,...,numsSize-1
        dp[i] = f(nums[i], nums[i] + dp[i-1]);
    }

    int res = nums[0];
    for (int i = 0; i < numsSize; i++) {
        res = f(res, dp[i]);
    }
    
    return res;
}


int f(int a , int b) {
    if (a >= b)
        return a;
    return b;
}

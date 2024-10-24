#include <stbool.h>

// leetcode-happy number

    //-------如何拆分一个整数？

    //---将数字拆开的方法：n=12345  -> 1,2,3,4,5
    // n = 12345;
    // --5: n % 10
    // --4: n / 10 % 10   去尾，再求个位数
    // --3: n / 100 % 10 
    // --too complcated 位数很大时，很麻烦，代码繁复，很烦，写成循环更好:
//soluion 1

int next_n(int n) {
    int r = 0;
    while (n != 0) {
        int d = n % 10;
        n /= 10;
        r += d * d;
    }
    return r;
}

bool contains(int* history, int size, int n) {
    for (int i = 0; i < size; i++) {
        if (history[i] == n) {
            return true;
        }
    }
    return false;
}

bool isHappy(int n){

    int history[1000];
    int size = 0;

    // history:[?,?,?,...] size:0
    // n: 19

    while (!contains(history, size, n)) {// have seen before or not
        history[size] = n;
        size++;

        n = next_n(n);
    }
    return n == 1;
}



// solution 2：进阶--龟兔赛跑(fast_slow pointer)


bool isHappy(int n){

    int slow = n;
    int fast = n;

    do {
        slow = next_n(slow);
        fast = next_n(fast);
        fast = next_n(fast);
    }while (slow != fast);

    return fast == 1;
}

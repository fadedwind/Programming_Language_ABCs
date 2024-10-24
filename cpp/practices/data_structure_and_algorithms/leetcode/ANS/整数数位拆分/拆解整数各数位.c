int next_n(int n) {
    int r = 0;
    while (n != 0) {
        int d = n % 10;
        n /= 10;
        r += d * d;
    }
    return r;
}
/*001 happy number function-return next*/




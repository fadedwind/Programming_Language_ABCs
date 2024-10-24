// Input: A positive integer 𝑁.
// Output: The summation S of odd numbers less than 𝑁.
// Requirement: Using while.
// Example: Using

#include <stdio.h>
#include <stdlib.h>

void odd_add(int N);
void run_quit_check(); 

int main(){
    for ( ; ; ) {
        int N;
        odd_add(N);
        run_quit_check();
    }
    return 0;
}

void odd_add(int N) {
    int S = 0;
    int n = 0;
    printf("Please input an integer.\n");
    scanf("%d",&N);
    
    while (n < N) {
        if(n % 2 == 0) {
            n++;
            continue;
        }
        else{
            S = S + n;
        }
        n++;
    }
    printf("The summation of odd numbers less than %d is %d \n",N,S);
}

void run_quit_check() {
    printf("Press x to exit.Press other key to countine running the program.\n");
    fflush(stdin);
    char s;
    scanf("%c",&s);
    if (s == 'x') {
        exit(0);
    }
    fflush(stdin);
}
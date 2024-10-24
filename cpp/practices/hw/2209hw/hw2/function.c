#include<stdio.h>
#include"function.h"

void trangle1(int n) {
    fflush(stdin);

    while(1) {
        fflush(stdin);
        printf("please input the number of the layer.\n");
        scanf("%d",&n);
        if (check_input(n) == 0){
            break;
        }
    }

    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 1; j < 2*n; j++) {
            if (j >= n-i && j <= n+i)
                printf("*");
            else
                printf("o");
        }
        printf("\n");
    }
}

void tree(int n,int m) {

    fflush(stdin);
    while(1) {
        fflush(stdin);
        printf("please input the layers of the crown\n");
        scanf("%d",&n);
        if (check_input(n) == 0){
            break;
        }
    }
    
    fflush(stdin);
    for( ; ; ) {
        fflush(stdin);
        printf("please input the layers of the trunk.\n");
        scanf("%d",&m);
        if (check_input(m) == 0){
            break;
        }
    }

    int i,j;
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < 2*n; j++) {
            if (j >= n-i && j <= n+i)
                printf("*");
            else
                printf(" ");
        }
    }

    for (i = 0; i < m; i++) { 
        printf("\n");
        for (j = 0; j < 2*n+1; j++) { 
            if (j == n)
                printf("*");
            else
                printf(" ");
        }
    }
    printf("\n");
}

int check_input(int num) {
    if (num > 0)
        return 0;
    else {
        printf("invalid input! Try again.\n");
        fflush(stdin);
        return 1;
    }
}
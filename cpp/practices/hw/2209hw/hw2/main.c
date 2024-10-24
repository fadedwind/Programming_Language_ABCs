#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main() {
    
    int n,m,choice;
   
    for ( ; ; ) { 
        printf("Choose a shape to show.(1:trangle,2:tree,other:exit)\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
            trangle1(n);
            break;
            case 2:
            tree(n,m);
            break;
            default:
            exit(0);
          
        }
        fflush(stdin);
    }
    return 0;
}



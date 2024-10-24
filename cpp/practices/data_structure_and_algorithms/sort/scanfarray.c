#include <stdio.h>

void scanfarray(double a[],int leng) {

    int i,j;
    printf ("please input the number of the array\n");
    scanf ("%d",&j);


    for (i = 0; i < j; i++) {
        printf ("please input the %dth number of the array:\n",i+1);
        scanf ("%lf",&a[i]);// never put a \n in function scanf!
    }
}


int main() {
    
    int leng;double a[100];

    scanfarray(a,leng);
    
    return 0;
}
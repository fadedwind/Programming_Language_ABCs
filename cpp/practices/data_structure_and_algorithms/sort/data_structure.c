#include <stdio.h>

typedef struct Complex
{
    float realpart;
    float imagpart;
}Complex;


void assign(Complex *A,float real,float imag) {
    A -> realpart = real;
    A -> imagpart = imag;
} 


void add(Complex *c,Complex A,Complex B) {

}
int main() {
    return 0;
}
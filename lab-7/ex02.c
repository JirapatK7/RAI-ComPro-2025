#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Before swap: a = %d, b = %d, c = %d\n", a, b, c);


    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    temp = *pb;
    *pb = *pc;
    *pc = temp;

    printf("After swap: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
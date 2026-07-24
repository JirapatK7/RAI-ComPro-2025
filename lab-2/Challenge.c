#include <stdio.h>
int main() {
    int a,b,c,d;
    float Avg;
    
    printf("Enter integer #1: ");
    scanf(" %d", &a);
    printf("Enter integer #2: ");
    scanf(" %d", &b);
    printf("Enter integer #3: ");
    scanf(" %d", &c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    d = a+b+c;
    Avg = (a+b+c)/3.0;

    printf("\nResults:\nMinimum:%d\nMaximum:%d\nSum:%d\nAverage:%.2f",min,max,d,Avg);
    return 0;
}
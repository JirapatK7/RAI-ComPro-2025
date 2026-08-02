#include<stdio.h>
int main()
{
    int no, sum=0;
    float avg;
    for(int i = 0; i<10; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &no);
        sum = sum + no;
    }
    avg = sum/10.0;
    printf("Total sum is %d.\n Average is %.2f", sum, avg);
    return 0;
}
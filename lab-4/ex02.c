#include<stdio.h>
int main()
{
    int no, sum=0, i=0;
    while(i < 10)
    {
        printf("Enter the number: ");
        scanf("%d", &no);
        sum = sum + no;
        i++;
    }
    printf("Total sum is %d", sum);
    return 0;
}
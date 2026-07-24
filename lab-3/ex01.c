#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter number1 : ");
    scanf("%f", &num1);
    printf("Enter number2 : ");
    scanf("%f", &num2);
    if (num2 == num1)
        printf("Match\n");
    else
        printf("Does not match. Try again\n");
    return 0;
}
#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter number1 :");
    scanf("%f, &num1");
    printf("Enter number2 : ");
    scanf("%f", &num2);
    if (num2 != 0)
        printf("%.2f/%.2f = %.2f", num1,num2,num1/num2);
    else
    printf("Error divided by zero\m");
    return 0;
}
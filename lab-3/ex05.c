#include<stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter cone height : ");
    scanf(" %f", &num1);
    printf("Enter cone base radius : ");
    scanf(" %f", &num2);
    num3 = (1.0/3.0) * (3.14) * (num2 * num2) * num1;
    printf("Cone volume : %.1f\n", num3);
    if (num3>260)
        printf("This cone is perfect for Supun project\n.");
    else
        printf("This cone is not fit for this project\n.");
    return 0;
}
#include <stdio.h>

int main()
{
    int num, i, mul = 1, product;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Multiplication table for %d.\n", num);

    for (i = 0; i < 12; i++)
    {
        product = num * mul;
        printf("%d x %d = %d\n", num, mul, product);
        mul++;
    }

    return 0;
}
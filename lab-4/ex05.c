#include <stdio.h>

int main()
{
    int num, count;
    int factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    count = num;

    while (count >= 1)
    {
        factorial = factorial * count;
        count--;
    }

    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}
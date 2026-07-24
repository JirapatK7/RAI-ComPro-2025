#include<stdio.h>
int main()
{
    int num1;
    printf("Enter number1 : ");
    scanf("%d", &num1);
    switch (num1>100 || num1<1)
    {
        case 1:
            printf("%d is out of range",num1);
            break;
        case 0:
            switch (num1 % 2 == 0){
                case 1:
                    printf("%d is even\n",num1);
                    break;
                case 0:
                    printf("%d is odd\n",num1);
                    break;
            }
    }
    return 0;
}
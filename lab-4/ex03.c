#include <stdio.h>

int main()
{
    int no;
    do
    {
        printf("Enter the number: ");
        scanf("%d", &no);
        if (no == 0)
        {
            printf("Exiting program...bye.\n");
            break;
        }
        else if (no % 2 == 0)
        {
            printf("%d is even.\n", no);
        }
        else
        {
            printf("%d is odd.\n", no);
        }
    }
    while (no != 0);
    return 0;
}
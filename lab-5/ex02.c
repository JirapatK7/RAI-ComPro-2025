#include <stdio.h>
int main()
{
    int original[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reverse[9], a;

    for (a = 0; a < 9; a++) {
        reverse[a] = original[8 - a];
    }

    printf("The reversed array is: ");
    for (a = 0; a < 9; a++) {
        printf("%d", reverse[a]);
        if (a < 8) {
            printf(", ");
        }
        else {
            printf("\n");
        }
    }
    
    return 0;
}
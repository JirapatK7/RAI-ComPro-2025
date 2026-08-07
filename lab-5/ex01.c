#include <stdio.h>
int main()
{
    int value[10],a;
    for (a =0;a<10;a++){
        printf("Enter the value %d here: ", a + 1);
        scanf("%d", &value[a]);
    }
    printf("Values in array are: ");
    for (a=0;a<10;a++){
        printf("%d", value[a]);
        if (a < 9) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
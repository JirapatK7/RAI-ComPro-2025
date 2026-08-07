#include <stdio.h>
int main()
{
    int marks[5];
    int i, total = 0, highest;

    for (i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++) {
        total += marks[i];
    }

    highest = marks[0];
    for (i = 1; i < 5; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    printf("Total Marks : %d\n", total);
    printf("HighestZ Marks : %d\n", highest);

    return 0;
}
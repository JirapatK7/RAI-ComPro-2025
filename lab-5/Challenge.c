#include <stdio.h>
int main()
{
    int n, i, j;
    int numbers[100];
    int unique[100];
    int count[100];
    int unique_count = 0;
    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++) {
        int found = 0;

        for (j = 0; j < unique_count; j++) {
            if (numbers[i] == unique[j]) {
                count[j]++;
                found = 1;
                break;
            }
        }

        if (!found) {
            unique[unique_count] = numbers[i];
            count[unique_count] = 1;
            unique_count++;
        }
    }

    printf("Output:\n");
    for (i = 0; i < unique_count; i++) {
        printf("Element %d occurs %d times\n", unique[i], count[i]);
    }

    return 0;
}
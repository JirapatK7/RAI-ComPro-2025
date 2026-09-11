#include <stdio.h>

int main() {
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *p = array; 

    for (int i = 5; i >= 0; i--) {
        p = array + i;
        printf("%d\n", *p);
        p++; 
    }

    return 0;
}
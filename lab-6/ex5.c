#include <stdio.h>
int main() 
{
struct Time {
    int minute;
    int seconds;
};
    struct Time inputs[3];
    int total_seconds = 0;
    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &inputs[i].minute, &inputs[i].seconds);
        total_seconds += (inputs[i].minute * 60) + inputs[i].seconds;
    }

    printf("Total time elasped: %d second(s)\n", total_seconds);

    return 0;
}
#include <stdio.h>
int main() {
    struct Vector 
    {
    float x;
    float y;
    };
    struct Vector u, v, sum;
    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);
    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_y: ");
    scanf("%f", &v.y);

    sum.x = u.x + v.x;
    sum.y = u.y + v.y;

    printf("Resultant vector is equvalence to %0.1fi + %0.1fj\n", sum.x, sum.y);

    return 0;
}
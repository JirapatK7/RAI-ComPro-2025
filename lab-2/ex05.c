#include <stdio.h>
int main() {
    float height;
    int age;
    char name[20];
    char EQ[20];
    char named[20];
    printf("Enter your full name : ");
    scanf(" %s %s", name,named);
    printf("Enter your age : ");
    scanf(" %d", &age);
    printf("Enter your height : ");
    scanf(" %f", &height);
    printf("Enter your University name : ");
    scanf(" %[^\n]", EQ);
    

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old\nand my height is\n%.1f cm tall",named[0],name,EQ,age,height);
    return 0;
}
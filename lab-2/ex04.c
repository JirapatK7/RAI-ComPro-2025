#include <stdio.h>
int main() {
    float pro;
    float phy;
    float cal;
    float g;
    int stuid;
    char name[20];


    printf("Enter your name : ");
    scanf(" %s", name);
    printf("Enter your student ID : ");
    scanf(" %d", &stuid);
    printf("Enter your Programming score : ");
    scanf(" %f", &pro);
    printf("Enter your Physics score : ");
    scanf(" %f", &phy);
    printf("Enter your Calculus score : ");
    scanf(" %f", &cal);
    g = (pro+phy+cal)/3;

    printf("Hi %s(%d)! Your GPA is %.2f",name,stuid,g);
    return 0;
}
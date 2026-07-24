#include <stdio.h>
int main() {
    float height;
    float weight;
    int age;
    char name[20];
    char EQ[20];
    char gender[2];

    printf("Enter your name : ");
    scanf(" %s", name);
    printf("Enter your Age : ");
    scanf(" %d", &age);
    printf("Enter your height : ");
    scanf(" %f", &height);
    printf("Enter your weight : ");
    scanf(" %f", &weight);
    printf("Enter your gender : ");
    scanf(" %s", gender);
    printf("Enter your Education Qualification : ");
    scanf(" %[^\n]", EQ);
    

    printf("Name : %s\nAge : %d\nGender : %s\nHeight : %.1f\nWeight : %.f\nEducation : %s\n",name,age,gender,height,weight,EQ);
    return 0;
}
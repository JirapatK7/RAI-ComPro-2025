#include<stdio.h>
int main()
{
    char name[30];
    int num1,num2,num3,num4;
    printf("Enter your name : ");
    scanf(" %s", name);
    printf("Enter your Calculus score : ");
    scanf(" %d", &num1);
    printf("Enter your Physic score : ");
    scanf(" %d", &num2);
    printf("Enter your Science score : ");
    scanf(" %d", &num3);
    num4 = (num1+num2+num3)/3;
    if (num4<50)
        printf("%s, your average is %d. You got grade F\n.",name,num4);
    else if (num4<60)
        printf("%s, your average is %d. You got grade D\n.",name,num4);
    else if (num4<70)
        printf("%s, your average is %d. You got grade C\n.",name,num4);
    else if (num4<80)
        printf("%s, your average is %d. You got grade B\n.",name,num4);
    else
        printf("%s, your average is %d. You got grade A\n.",name,num4);
    return 0;
}
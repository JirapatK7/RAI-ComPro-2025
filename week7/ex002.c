#include <stdio.h>
int main()
{
    int i;
    struct profile
    {
        char name[20];
        int age;
    }
    student[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &student[i].age);
    }
    for (i = 0; i < 10; i++)
    {
        if (student[i].age > 20)
        {
            printf("\n %s,%d", student[i].name, student[i].age);
        }
    }
   
    return 0;
}
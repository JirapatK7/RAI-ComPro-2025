#include <stdio.h>

int main()
{
    int i;
    int highest_index = 0; 
    struct profile
    {
        char name[20]; 
        int age;
        float score;
    };
    struct profile students[3];
    for(i = 0; i < 3; i++)
    {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name); 
        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
    }
   
    for(i = 1; i < 3; i++)
    {
        if(students[i].score > students[highest_index].score)
        {
            highest_index = i;
        }
    }
    printf("\nThe highest scores belongs to %s at %.1f scores!\n", students[highest_index].name, students[highest_index].score);
    return 0;
}
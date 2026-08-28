#include <stdio.h>
int main()
{
    int i;
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
    printf("\n"); 
    for(i = 0; i < 3; i++)
    {
        printf("Student %d name is \"%s\", age %d. score %.1f\n", 
               i + 1, students[i].name, students[i].age, students[i].score);
    }
    return 0;
}
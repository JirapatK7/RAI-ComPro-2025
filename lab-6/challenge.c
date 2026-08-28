#include <stdio.h>
int main() {
    struct Student 
    {
    char name[21];
    int id;
    int grades[4];
    };
    struct Student students[3];
    const char *subjects[] = {"Math", "English", "Science", "History"};
    float subject_totals[4] = {0};
    
    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%20s %d %d %d %d %d", 
              students[i].name, 
              &students[i].id,
              &students[i].grades[0], 
              &students[i].grades[1],
              &students[i].grades[2], 
              &students[i].grades[3]);
    }

    printf("Student Averages:\n");
    int top_student_idx = 0;
    float max_student_avg = -1.0;

    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += students[i].grades[j];
            subject_totals[j] += students[i].grades[j]; 
        }
        float avg = sum / 4.0;
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, avg);

        if (avg > max_student_avg) {
            max_student_avg = avg;
            top_student_idx = i;
        }
    }

    printf("Top Student: %s with %.2f\n", students[top_student_idx].name, max_student_avg);

    printf("Subject Averages:\n");
    int top_subject_idx = 0;
    float max_subject_avg = -1.0;

    for (int j = 0; j < 4; j++) {
        float subj_avg = subject_totals[j] / 3.0;
        printf("%s: %.2f\n", subjects[j], subj_avg);

        if (subj_avg > max_subject_avg) {
            max_subject_avg = subj_avg;
            top_subject_idx = j;
        }
    }

    printf("Top Subject: %s with average %.2f\n", subjects[top_subject_idx], max_subject_avg);

    return 0;
}
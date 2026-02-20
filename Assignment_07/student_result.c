#include <stdio.h>

// student structure definition
struct Student {
    int roll_no;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[50];

    for (i = 0; i < n; i++) {
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in 3 subjects: ");
        students[i].total = 0;
        for (j = 0; j < 3; j++) {
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].percentage = students[i].total / 3.0;
    }

    printf("\nStudent Result:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", students[i].total);
        printf("Percentage: %.2f%%\n\n", students[i].percentage);
    }

    // result display logic
    return 0;
}
// made by abhinav

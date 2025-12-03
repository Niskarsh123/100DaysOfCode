#include <stdio.h>

int main() {
    FILE *f = fopen("students.txt", "w");
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[50];
    int roll;
    float marks;

    for(int i = 0; i < n; i++) {
        printf("Name Roll Marks: ");
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(f, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(f);

    f = fopen("students.txt", "r");
    printf("\nStudent Records:\n");
    while(fscanf(f, "%s %d %f", name, &roll, &marks) == 3)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);

    fclose(f);
    return 0;
}

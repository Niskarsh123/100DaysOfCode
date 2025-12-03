//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

void printStudent(struct Student s) {
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s = {"Ayush", 101, 95.5};
    printStudent(s);
    return 0;
}

//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

struct Student topStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for(int i=1;i<n;i++)
        if(s[i].marks > top.marks) top = s[i];
    return top;
}

int main() {
    struct Student s[3] = {{"Ayush",101,90},{"Vaibhav",102,95},{"Aryan",103,85}};
    struct Student top = topStudent(s,3);
    printf("Top Student: %s %d %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}

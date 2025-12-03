//Find student with highest marks.
#include <stdio.h>

struct Student { char name[50]; int roll_no; float marks; };

int main() {
    struct Student s[3]; // 3 students for example
    for(int i=0;i<3;i++)
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    struct Student top = s[0];
    for(int i=1;i<3;i++)
        if(s[i].marks > top.marks) top = s[i];

    printf("Top Student: %s %d %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}

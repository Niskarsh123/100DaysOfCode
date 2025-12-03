//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student { char name[50]; int roll; float marks; };

int main() {
    struct Student s1 = {"Alice",101,90}, s2 = {"Alice",101,90};
    if(strcmp(s1.name,s2.name)==0 && s1.roll==s2.roll && s1.marks==s2.marks)
        printf("Identical\n");
    else printf("Not identical\n");
    return 0;
}

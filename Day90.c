//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE, OTHER};
    struct Person {
        char name[50];
        enum Gender g;
    };

    struct Person p = {"Ayush", MALE};

    printf("Name: %s, Gender: %s\n", p.name, 
        p.g == MALE ? "Male" : p.g == MALE ? "male" : "Other");
    return 0;
}

//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date { int day, month, year; };
struct Employee { char name[50]; int id; struct Date join; };

int main() {
    struct Employee e = {"Alice", 101, {1, 5, 2020}};
    printf("Name: %s, ID: %d, Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.join.day, e.join.month, e.join.year);
    return 0;
}

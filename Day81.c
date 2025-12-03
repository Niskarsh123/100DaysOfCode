//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

int main() {
    enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    for(int d = SUNDAY; d <= SATURDAY; d++)
        printf("%d %s\n", d, 
            d==SUNDAY?"Sunday":d==MONDAY?"Monday":d==TUESDAY?"Tuesday":
            d==WEDNESDAY?"Wednesday":d==THURSDAY?"Thursday":
            d==FRIDAY?"Friday":"Saturday");
    return 0;
}

//Print all enum names and integer values using a loop.
#include <stdio.h>

int main() {
    enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    const char *names[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    for(int i = SUNDAY; i <= SATURDAY; i++)
        printf("%s = %d\n", names[i], i);

    return 0;
}

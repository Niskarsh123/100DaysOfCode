//Create an enum for months and print how many days each month has.
#include <stdio.h>

int main() {
    enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for(int m = JAN; m <= DEC; m++)
        printf("%d %s: %d days\n", m+1,
            m==JAN?"Jan":m==FEB?"Feb":m==MAR?"Mar":m==APR?"Apr":
            m==MAY?"May":m==JUN?"Jun":m==JUL?"Jul":m==AUG?"Aug":
            m==SEP?"Sep":m==OCT?"Oct":m==NOV?"Nov":"Dec",
            days[m]);

    return 0;
}

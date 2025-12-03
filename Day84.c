//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status s = FAILURE;

    if(s == SUCCESS) printf("Operation successful\n");
    else if(s == FAILURE) printf("Operation failed\n");
    else printf("Operation timed out\n");

    return 0;
}

//Show that enums store integers by printing assigned values.
#include <stdio.h>

int main() {
    enum Status {SUCCESS=1, FAILURE=0, TIMEOUT=5};
    printf("SUCCESS=%d\nFAILURE=%d\nTIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}

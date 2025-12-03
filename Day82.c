//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

int main() {
    enum Traffic {RED, YELLOW, GREEN};
    enum Traffic t = RED;

    if(t == RED) printf("Stop\n");
    else if(t == YELLOW) printf("Wait\n");
    else printf("Go\n");

    return 0;
}

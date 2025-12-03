//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

int main() {
    enum Menu {ADD, SUBTRACT, MULTIPLY};
    int x = 5, y = 3;
    enum Menu choice = MULTIPLY;

    switch(choice) {
        case ADD: printf("%d\n", x+y); break;
        case SUBTRACT: printf("%d\n", x-y); break;
        case MULTIPLY: printf("%d\n", x*y); break;
    }

    return 0;
}

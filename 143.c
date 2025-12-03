#include <stdio.h>

int main() {
    char line[200];
    FILE *f = fopen("info.txt", "r");
    if(f) {
        while(fgets(line, sizeof(line), f))
            printf("%s", line);
        fclose(f);
    }
    return 0;
}

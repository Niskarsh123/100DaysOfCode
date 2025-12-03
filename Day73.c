#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("info.txt", "r");
    if(!f) return 0;

    int chars = 0, words = 0, lines = 0;
    char c, prev = ' ';

    while((c = fgetc(f)) != EOF) {
        chars++;
        if(c == '\n') lines++;
        if(!isspace(c) && isspace(prev)) words++;
        prev = c;
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(f);
    return 0;
}

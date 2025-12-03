//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if(!fin || !fout) return 0;

    char c;
    while((c = fgetc(fin)) != EOF) {
        if(islower(c)) c = toupper(c);
        fputc(c, fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Conversion done.\n");
    return 0;
}

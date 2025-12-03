//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    if(!f) return 0;

    char c;
    int vowels = 0, consonants = 0;

    while((c = fgetc(f)) != EOF) {
        if(isalpha(c)) {
            c = tolower(c);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    fclose(f);
    return 0;
}

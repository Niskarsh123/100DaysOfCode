//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    char text[200];
    printf("Enter text to append: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);

    FILE *f = fopen("info.txt", "a");
    if(f) {
        fprintf(f, "%s", text);
        fclose(f);
        printf("Text appended successfully.\n");
    }
    return 0;
}

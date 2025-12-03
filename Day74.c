//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source and destination filenames: ");
    scanf("%s %s", src, dest);

    FILE *f1 = fopen(src, "r");
    FILE *f2 = fopen(dest, "w");
    if(!f1 || !f2) return 0;

    char c;
    while((c = fgetc(f1)) != EOF)
        fputc(c, f2);

    fclose(f1);
    fclose(f2);
    printf("File copied successfully.\n");
    return 0;
}

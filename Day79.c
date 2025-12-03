//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *f = fopen("numbers.txt", "r");
    if(!f) return 0;

    int num, count = 0;
    double sum = 0;

    while(fscanf(f, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if(count > 0)
        printf("Sum = %.0lf\nAverage = %.2lf\n", sum, sum/count);
    fclose(f);
    return 0;
}

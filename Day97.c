//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee { char name[50]; int id; float salary; };

int main() {
    struct Employee e = {"Alice",101,50000};
    FILE *f = fopen("emp.dat","wb");
    fwrite(&e,sizeof(e),1,f);
    fclose(f);

    struct Employee r;
    f = fopen("emp.dat","rb");
    fread(&r,sizeof(r),1,f);
    fclose(f);

    printf("Name: %s, ID: %d, Salary: %.2f\n", r.name, r.id, r.salary);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct Structure
{
    long long ID;
    char name[20];
    char sex;
    double CGPA;
};

union Union
{
    long long ID;
    char name[20];
    char sex;
    double CGPA;
};

int main()
{
    struct Structure p;
    union Union q;

    p.ID = 802520205101059;
    strcpy(p.name, "Habibullah");
    p.sex = 'M';
    p.CGPA = 3.50;

    q.ID = 802520205101059;
    // strcpy(q.name, "Habibullah");
    // q.sex = 'M';
    // q.CGPA = 3.50;

    printf("ID: %lld\n", p.ID);
    printf("Name: %s\n", p.name);
    printf("Gender: %c\n", p.sex);
    printf("CGPA: %.2lf\n", p.CGPA);
    printf("\n");

    printf("ID: %lld\n", q.ID);

    return 0;
}
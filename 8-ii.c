#include <stdio.h>
#include <stdlib.h>

struct Structure
{
    long ID;
    char name[20];
    char sex;
    double CGPA;
};

union Union
{
    long ID;
    char name[20];
    char sex;
    double CGPA;
};

int main()
{
    struct Structure x;
    union Union y;

    printf("%zu\n", sizeof(x));
    printf("%zu\n", sizeof(y));

    return 0;
}
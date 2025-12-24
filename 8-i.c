#include <stdio.h>

struct Structure{
    long ID;
    char name[20];
    char sex;
    double CGPA;
};

struct Union{
    long ID;
    char name[20];
    char sex;
    double CGPA;
};

int main(){
    struct Structure x;
    struct Union y;  

    return 0;
}
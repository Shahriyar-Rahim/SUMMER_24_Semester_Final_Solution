#include <stdio.h>
#include <stdlib.h>

int main(){
    //example of malloc(), calloc(), realloc(), free() functions
    int *p = (int *)malloc(sizeof(int)); //allocate memory for one integer
    *p = 10;

    printf("%d\n", *p);

    free(p);

    p = (int *)calloc(5, sizeof(int));
    p[0] = 10, p[1] = 20, p[2] = 30, p[3] = 40, p[4] = 50;
    printf("%d\n", p[4]);

    p = (int *)realloc(p, 10 * sizeof(int));
    p[0] = 10, p[1] = 20, p[2] = 30, p[3] = 40, p[4] = 50, p[5] = 60, p[6] = 70, p[7] = 80, p[8] = 90, p[9] = 100;
    printf("%d\n", p[9]);

    free(p);

    return 0;
}
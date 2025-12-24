#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    printf("\n a = %x p = %x", a, p);
    printf("\n a = %x p = %x", &a, &p);
    printf("\n a[0] = %x p[0] = %x", a[0], p[0]);
    printf("\n a[0] = %d p[0] = %d", a[0], p[0]);
    printf("\n a[1] = %x p[1] = %x", &a[1], &p[1]);
    printf("\n a[1] = %x p[1] = %x", a+1, p+1);
    printf("\n a[1] = %x p[1] = %x", a[1], p[1]);
    printf("\n a[1] = %d p[1] = %x", *(a+1), *(p+1));

    return 0;
}
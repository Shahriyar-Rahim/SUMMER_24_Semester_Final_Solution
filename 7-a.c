#include <stdio.h>

int callByValue(int x){
    x = x * 2;
    return x;
}

int callByReference(int *x){
    *x = 100;
    return *x;
}

int main(){
    int n = 2;

    printf("%d\n", callByValue(n));
    printf("%d\n", n);

    n = 3;
    printf("%d\n", n);
    printf("%d\n", callByReference(&n));

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char a[80] = "abcd";
    char b[80] = "ef";

    printf("%d", strcmp(a, b));

    return 0;
}
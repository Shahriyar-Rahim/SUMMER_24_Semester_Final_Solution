#include <stdio.h>

int main() {
    char a[80] = "abcd";
    char b[80] = "ef";
    int i = 0;

    while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0') {
        i++;
    }

    printf("%d", a[i] - b[i]);

    return 0;
}

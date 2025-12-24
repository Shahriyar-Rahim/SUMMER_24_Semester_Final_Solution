#include <stdio.h>

int main() {
    char a[80] = "abcd";
    char b[80] = "ef";
    int i = 0, diff = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            diff = a[i] - b[i];
            break;
        }
        i++;
    }

    // If all matched so far, check length difference
    if (diff == 0) {
        diff = a[i] - b[i];
    }

    printf("%d", diff);

    return 0;
}

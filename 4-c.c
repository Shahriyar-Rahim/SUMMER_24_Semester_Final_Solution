#include <stdio.h>
#include <string.h>

int main(){
    char s1 [80]  = "Hello";
    char s2 [80] = "World";

    printf("%s\n", strcat(s1, s2));

    strcat(s1, "!");
    printf("%s\n", s1);

    printf("%d\n", strlen(s1));

    printf("%d\n", strcmp(s1, s2));

    printf("%s\n", strchr(s1, 'W'));

    printf("%s\n", strrchr(s1, 'W'));

    printf("%s\n", strstr(s1, "World"));

    printf("%s\n", strpbrk(s1, "aeiou"));

    printf("%s\n", strtok(s1, " "));

    printf("%s\n", strtok(NULL, " "));
    strcpy(s2, s1);
    printf("%s\n", s2);


    return 0;
}
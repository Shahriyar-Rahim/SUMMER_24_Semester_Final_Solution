#include <stdio.h>
#include <stdlib.h>

int isPalindrome(char *str);

int isPalindrome(char *str){

    int len = 0;

    while(str[len] != '\0') len++;

    if(str == NULL || len <= 0) return 0;

    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len - i - 1]) return 0; 
    }
    return 1;
}

int main(){
    // int n;
    
    // printf("Enter the lenght of the string: ");
    // scanf("%d", &n);

    char *str;
    str = (char *)calloc(100, sizeof(char));

    printf("Enter the string: ");
    scanf("%s", str);

    if(isPalindrome(str)) printf("The string \"%s\" is a palindrome\n", str);
    else printf("The string \"%s\" is not a palindrome\n", str);

    free(str);

    return 0;
}
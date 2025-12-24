#include <stdio.h>

int main(){
    long long n;
    long long a, b, c;

    start:
         a = 0;
         b = 1;

    printf("Enter the number of terms: ");
    scanf("%lld", &n);

    if(n < 100 && n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%lld ", a);
            c = a + b;
            a = b;
            b = c;
        }
    }
    else
    {
        printf("Invalid input\n");
        goto start;
    }

    return 0;
}
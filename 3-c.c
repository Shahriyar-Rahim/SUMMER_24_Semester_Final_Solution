#include <stdio.h>

int main(){
    int n;

    while (-1)
    {
        printf("Enter the number: ");
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", n);
        if (n > 0)
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                if(i % 2 == 0)
                continue;
                sum += i;

            }
            printf("Sum: %d\n", sum);
        }
        
    }
    

    return 0;
}
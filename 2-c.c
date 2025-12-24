#include <stdio.h>

int main(){
    float a, b, c;
    float best, worst, avg;

    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    best = a;
    if(b > best) best = b;
    if(c > best) best = c;

    worst = a;
    if(b< worst) worst = b;
    if(c < worst) worst = c;

    avg = (a + b + c) / 3.0f;

    printf("Best: %.2f\n", best);
    printf("Worst: %.2f\n", worst);
    printf("Average: %.2f\n", avg);


    return 0;
}
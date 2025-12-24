#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;

    printf("The elements of the array using original arrayare: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\nThe elements of the array using pointer arithmetic: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr + i)); // *(ptr + i) is equivalent to ptr[i]
    }

    return 0;
}
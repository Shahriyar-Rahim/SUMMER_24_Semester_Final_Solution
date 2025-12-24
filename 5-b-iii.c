#include <stdio.h>

int find_MAX(int m, int n, int arr[m][n]){
    int max = arr[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int find_MIN(int m, int n, int arr[m][n]){
    int min = arr[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }

    return min;
}

int main(){
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr [m][n];

    printf("Enter the elements: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D matrix is: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // this part is not asked in the queastion.
    printf("The transpose of the 2D matrix is: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    //If the matrix is a square matrix then we can find the sum of the diagonal elements.
    int sum = 0;
    if(m == n){
        for(int i = 0; i < m; i++){
            sum += arr[i][i];
        }
        printf("The sum of the diagonal elements is: %d\n", sum);
    }

    FILE *summation;
    summation = fopen("sum.txt", "w");
    fprintf(summation, "%d\n", sum);
    fclose(summation);

    int sm;
    summation = fopen("sum.txt", "r");
    fscanf(summation, "%d", &sm);
    
    printf("The sum of the diagonal elements using file is: %d\n", sm);

    printf("The maximum element in the 2D matrix is: %d\n", find_MAX(m, n, arr));
    printf("The minimum element in the 2D matrix is: %d\n", find_MIN(m, n, arr));

    return 0;
}
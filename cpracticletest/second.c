#include <stdio.h>

main() {
    int a[2][2];
    int i, j;
    float sum = 0, average;

    printf("Enter 2D array elements:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];   
        }
    }

    average = sum / 4;   

    printf("Average = %.2f", average);
}

#include <stdio.h>

main() {
    int a[10], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Odd elements are:\n");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
}

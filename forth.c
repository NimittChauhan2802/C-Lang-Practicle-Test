#include <stdio.h>

main() {
    int a[10], n, i;
    int *p;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Even elements are:\n");
    for(i = 0; i < n; i++) {
        if(*(p + i) % 2 == 0)
            printf("%d ", *(p + i));
    }
}

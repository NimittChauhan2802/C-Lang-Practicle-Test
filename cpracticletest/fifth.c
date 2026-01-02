#include <stdio.h>

main() {
    int i, j;

    for(i = 6; i <= 10; i++) {
        for(j = 6; j < i; j++) {
            printf("  ");
        }
        for(j = i; j <= 10; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

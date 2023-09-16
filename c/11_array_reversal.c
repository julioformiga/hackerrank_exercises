#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    printf("What size of the array? ");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */

    for (i = num; i > 0; i--)
        printf("%d ", *(arr + i - 1));
    printf("\n");
    return 0;
}

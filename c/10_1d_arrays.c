#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, sum = 0;
    printf("What size of the array? ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    while (n > 0) {
        scanf("%d", arr);
        sum += *arr;
        n--;
    }
    free(arr);
    printf("%d\n", sum);
    return 0;
}

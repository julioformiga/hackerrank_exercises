#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 4, w = 0, d;
    /* scanf("%d", &n); */

    // Complete the code to print the pattern.
    w = (n * 2) - 2;
    for (int i = 0; i <= w; i++) {
        for (int j = 0; j <= w; j++) {
            d = n;

            if(i < n) d -= i;
            else d = i - n + 2;

            if(i < n && j < n - 1 && i > j) d += i - j;
            if(i >= n && j < n - 2 && i > j && i < w && i + j < w) d += w - i - j;
            if(i < n && j >= n && i + j > w && i < j) d += i - (w - j);
            if(i >= n && j >= n && i + j > w && i < j) d += j - i;

            printf("%2d ", d);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

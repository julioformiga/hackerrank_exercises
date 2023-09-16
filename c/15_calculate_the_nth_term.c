#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    if (n <= 3)
        return ((n == 1) ? a : ((n == 2) ? b : c));
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return find_nth_term(n - 1, b, c , a + b + c);
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    /* n = 5; */
    /* a = 1; */
    /* b = 2; */
    /* c = 3; */
    /* n = 3; */
    /* a = 4; */
    /* b = 6; */
    /* c = 8; */
    /* n = 5; */
    /* a = 43; */
    /* b = 71; */
    /* c = 71; // 327 */
    int ans = find_nth_term(n, a, b, c);

    printf("%d\n", ans);
    return (0);
}

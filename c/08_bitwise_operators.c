#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculate_the_maximun(int n, int k) {
	// Write your code here
	int abAND = 0, abOR = 0, abXOR = 0;
	for (int j = 1; j <= k; j++) {
		for (int i = 1; i <= n; i++) {
			if (i > j) {
				/* printf("a = %d, b = %d, AND = %d, OR = %d, XOR = %d\n", j, i, i & j,
				* i | j, i ^ j); */
				if (k > (i & j) && abAND < (i & j))
					abAND = (i & j);
				if (k > (i | j) && abOR < (i | j))
					abOR = (i | j);
				if (k > (i ^ j) && abXOR < (i ^ j))
					abXOR = (i ^ j);
			}
		}
	}
	printf("%d\n%d\n%d\n", abAND, abOR, abXOR);
	/* printf("AND = %d\n", abAND); */
	/* printf("OR = %d\n", abOR); */
	/* printf("XOR = %d\n", abXOR); */
}

int main() {
	/* int n = 5; int k = 4; */
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximun(n, k);
	return 0;
}

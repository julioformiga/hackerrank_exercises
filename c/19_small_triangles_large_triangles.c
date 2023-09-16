#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double tr_area(triangle tr)
{
    double area;
    double p;

    p = ((double)tr.a + (double)tr.b + (double)tr.c) / 2;
    area = p * (p - tr.a) * (p - tr.b) * (p - tr.c);

    return (sqrt(area));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle tr_swap;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (tr_area(*(tr + i)) > tr_area(*(tr + i + 1)))
            {
                tr_swap = *(tr + i + 1);
                *(tr + i + 1) = *(tr + i);
                *(tr + i) = tr_swap;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s1, char **s2)
{
    char *swap;

    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}

int next_permutation(int n, char **s)
{
    int i = n - 1;

    while (i > 0 && strcmp(s[i], s[i - 1]) <= 0) i--;
    if (i == 0) return 0;

    int j = n - 1;
    while (j >= i && strcmp(s[j], s[i - 1]) <= 0) j--;
    printf("\t  1° SWAP: %s, %s\n", *(s + (i - 1)), *(s + j));
    swap(s + (i - 1), s + j);

    j = n - 1;
    while (i < j)
    {
        printf("\t  %i° SWAP: %s, %s\n", i, *(s + i), *(s + j));
        swap(s + i, s + j);
        i++;
        j--;
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}

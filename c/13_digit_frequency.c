#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* char *s = "1v88886l256338ar0ekk"; */
    char s[1000];
    int count;
    int i, j;

    scanf("%[^\n]", s);
    for (j = 0; j < 10; j++)
    {
        count = 0;
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == j + 48)
            {
                /* printf("%d = %d", s[i], j + 48); */
                count++;
            }
        }
        /* printf("\n"); */
        printf("%d ", count);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
/* #include <string.h> */
/* #include <math.h> */
/* #include <stdlib.h> */

int main() {
  char ch, s[100], sen[100];

  printf("Informe o caracter: ");
  scanf("%c", &ch);
  fflush(stdin);

  printf("Informe a sequencia de caracters: ");
  scanf("%s", s);
  fflush(stdin);

  printf("Informe a segunda sequencia de caracters: ");
  scanf("\n");
  scanf("%99[^\n]s", sen);
  fflush(stdin);

  printf("Character: %c\n", ch);
  printf("String: %s\n", s);
  printf("Text: %s\n", sen);

  return 0;
}

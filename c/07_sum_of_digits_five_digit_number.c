#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* int sumint(int n) { */
/*   char const digit[10] = "0123456789"; */
/*   return 0; */
/* } */

int main() {
  int n;
  int sumn = 0, digits = 0, ncalc = 0;

  scanf("%d", &n);
  // Complete the code.
  ncalc = n;
  while(ncalc != 0) { ncalc /= 10; digits++; }
  char str[digits + 1];

  snprintf(str, digits + 1, "%d", n);

  for(int i = 0; i < digits; i++) {
    sumn += (int)str[i] - 48;
  }

  printf("%d\n", sumn);
  return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b;
  char* numbers[9] = {"one", "two",   "three", "four", "five",
                      "six", "seven", "eight", "nine"};
  char* evenodd[2] = {"even", "odd"};

  scanf("%d\n%d", &a, &b);
  // Complete the code.
  for (int i = a; i <= b; i++) {
    if(i <= 9)
      printf("%s\n", numbers[i - 1]);
    else
      printf("%s\n", evenodd[i % 2]);
  }

  return 0;
}

#include <stdio.h>

void update(int *a, int *b) {
  int ca = *a;
  int cb = *b;
  *a = ca + cb;
  *b = ( ca > cb) ? ca - cb : cb - ca;
}

int main() {
  int a = 3, b = 5;
  int *pa = &a, *pb = &b;

  printf("a  = %d - %p\nb  = %d - %p\n", a, &a, b, &b);
  printf("pa = %d - %p\npb = %d - %p\n\n", *pa, &pa, *pb, &pb);

  update(pa, pb);
  /* a = 5; */

  printf("a  = %d - %p\nb  = %d - %p\n", a, &a, b, &b);
  printf("pa = %d - %p\npb = %d - %p\n\n", *pa, &pa, *pb, &pb);

  return 0;
}

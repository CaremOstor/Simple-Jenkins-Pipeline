#include "logic.c"
#include <stdio.h>
#include <assert.h>
int main(){
  int a1, b1, r1, a2, b2, r2, x, y;

  printf("\nFirst circle (x y r):");
  int msg1 = scanf("%d %d %d", &a1, &b1, &r1);
  assert(msg1);
  printf("\nSecond circle (x y r):");
  int msg2 = scanf("%d %d %d", &a2, &b2, &r2);
  assert(msg2);
  printf("\nThird C (x y):");
  int msg3 = scanf("%d %d", &x, &y);
  assert(msg3);

  int result = logic(a1, b1, r1, a2, b2, r2, x, y);
  printf("result: %d", result);
}

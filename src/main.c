#include "logic.c"

int main(){
  int a1, b1, r1, a2, b2, r2, x, y;

  printf("\nFirst circle (x y r):");
  msg1 = scanf("%d %d %d", &a1, &b1, &r1);
  assert(msg);
  printf("\nSecond circle (x y r):");
  msg2 = scanf("%d %d %d", &a2, &b2, &r2);
  assert(msg2);
  printf("\nThird C (x y):");
  msg3 = scanf("%d %d", &cx, &cy);
  assert(msg3);

  result = logic(a1, b1, r1, a2, b2, r2, x, y);
  printf("result: %d", result);
}

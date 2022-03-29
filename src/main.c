#include "logic.c"

int main(){
  int a1, b1, r1, a2, b2, r2, x, y;

  printf("\nFirst circle (x y r):");
  scanf("%d %d %d", &a1, &b1, &r1);
  printf("\nSecond circle (x y r):");
  scanf("%d %d %d", &a2, &b2, &r2);
  printf("\nThird C (x y):");
  scanf("%d %d", &cx, &cy);

  result = logic(a1, b1, r1, a2, b2, r2, x, y);
  printf("result: %d", result);
}

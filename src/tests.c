#include <stdio.h>
#include "logic.c"
int TestLogic(int a1, int b1, int r1, int a2, int b2, int r2, int x, int y, int expected, int numOfTest) {
  if ( logic(a1, b1, r1, a2, b2, r2, x, y) == expected ) {
    printf("Test №%d passed!\n", numOfTest);
  }
  else{
    printf("Test №%d failed! \nArguments: \n\ta1=%d \n\tb1=%d \n\tr1=%d \n\ta2=%d \n\tb2=%d \n\tr2=%d \n\tx=%d \n\ty=%d", numOfTest, a1, b1, r1, a2, b2, r2, x, y);
  }
}

int main() {
  TestLogic(-1, -1, -1, -1, -1, -1, -1, -1, 0, 1);
  TestLogic(10, 10, 2, 10, 10, 2, 15, 15, 0, 2); 
  TestLogic(2, 2, 10, 2, 2, 10, 2, 2, 1, 3);

  return 0;
}

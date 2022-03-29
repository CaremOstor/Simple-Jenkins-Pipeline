int logic(int a1, int b1, int r1, int a2, int b2, int r2, int x, int y){
// returns 1 if triangle ABC is in crossing between 2 circles
// Formula: ( (x-a1)^2 + (y-b1)^2 <= r1^2 ) & ( (x-a2)^2 + (y-b2)^2 <= r2^2 )
  if ((a1>0) && (b1>0) && (r1>0) && (a2>0) && (b2>0) && (r2>0) && (x>0) && (y>0)) {
    if (((x-a1)*(x-a1)+(y-b1)*(y-b1)<r1*r1) && ((x-a2)*(x-a2)+(y-b2)*(y-b2)<r2*r2)) {
      return 1;
    }
  }
  return 0;
}

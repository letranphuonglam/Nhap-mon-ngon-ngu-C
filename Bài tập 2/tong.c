#include <stdio.h>

int main(void) {
  double R,DT,CV;
  const double PI = 3.14;
  printf("Nhap R = ");
  scanf("%lf,&R")
  DT = R*R*PI;
  CV = 2*R*PI;
  printf("Chu vi: = %f\n",CV);
  printf("Dien tich: = %f\n",DT);
  return 0;
}



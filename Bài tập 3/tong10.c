#include <stdio.h>

int main(void) {
  //khai bao bien tong tu 1 dem 10

  int tong;
  tong = tong +1;
  tong = tong + 2;
  tong = tong + 3;
  tong = tong + 4;
  tong = tong + 5;
  tong = tong + 6;
  tong = tong + 7;
  tong = tong + 8;
  tong = tong + 9;
  tong = tong + 10;
  //vong lap for
  int dem;
  for(dem = 1;dem <=10;dem++)
    tong = tong + dem;
      printf("Tong la: %d",tong);
  return 0;
}

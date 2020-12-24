#include <stdio.h>

int main(void) {
  //khai bao bien tong tu 1 dem 10

  int tong;
  // tong = 1 + 2 + 3 +....+10
  tong = 0;
  //vong lap for
  int dem;
  for(dem = 1;dem <=10;dem++){
    tong = tong + dem;
  }
      printf("Tong la: %d",tong);
  return 0;
}

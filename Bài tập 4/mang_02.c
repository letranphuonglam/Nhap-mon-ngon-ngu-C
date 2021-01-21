#include <stdio.h>
int main () {
  //Khai bao bien kem mang a kich thuoc bang 100 (0<n<=100)
  int a[100];
  int n, i;
  //Khai bao bien c de tinh tong
  int tong = 0;
      //xuat dong chu nhap kich thuoc mang
  		printf("\nNhap kich thuoc mang:");
  		scanf("\n%d", &n);
      //xuat dong chu Nhap so phan tu ra man hinh
      	printf("\nNhap so phan tu:");
 	
	 	for	(i = 0; i < n; i++){
      	scanf("\n%d", &a [i]);
		}
 	 //Vong lap Tong cac so tu day tren
		for ( i = 0; i < n; i++){
		tong = tong + a[i];
		}
    //xuat ket qua tinh tong ra man hinh 
		printf("\nTong cac so tu day tren = %d", tong);
  
  return  0;
}

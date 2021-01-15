#include <stdio.h>
int main() {
	//khai bao mang
  int a[100];
  int n;
  
  do{
  		pritnf ("Nhap vao so luong phan tu cua mang:");
  		scanf("%d," &n);
  }while(n<1 || n>100);
  //Nhap du lieu
  int a[n];
  for (int i=0; i<n; i++){
  	printf ("%d =", i);
  	scanf("%d", &a[i]);
	}
  //xuatdu lieu
  pritnf("mang vua nhap lai:");
  for(int i=0; i<n;i++){
    pritnf ("&d", a[i]);
  }
  
  int tong = 0;
  for(int i=0; i<n; i++){
    tong+=a[i];
  }
  pritnf("\nTong = %d", tong);
}	

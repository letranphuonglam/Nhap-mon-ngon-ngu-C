#include <stdio.h>
 //cho arr[i] lon hon lonnhat th� g�n gi� tri arr[i]
int LN_n(int n, int arr[]) {
int lonnhat = 0;
  for (int i = 0; i < n; i++){
    if (arr[i] > lonnhat) {
      lonnhat = arr[i];
      //khi arr[i] m� lon hon lonnhat th� g�n gi� tr? arr[i] cho l?n nh?t
    }
  }
  return lonnhat;
  //tra ve lonnhat (lonnhat = 1)
}
int giaithua (int n, int arr[]) {
int giaithua = 1;
  for (int i = 0; i < n; i++) {
    giaithua *=  arr[i];
    //giaithua = giaithua * arr[i]
  }
  return giaithua;
  //tra gi� tri ve giaithua (giaithua = 1);
}

int main () {
  printf ("Nhap n = ");
  int n;
  scanf ("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf ("Gia tri mang %d = ", i);
    scanf ("%d", &arr[i]);
  }
  //Xuat khai b�o gi� tri
  printf ("Phan tu lon nhat = %d\n", LN_n(n, arr));
  printf ("Gia thua cua n = %d", giaithua(n, arr));
}

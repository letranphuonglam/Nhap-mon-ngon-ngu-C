#include <stdio.h>
int main(){
	int a,b;
  	//khai bao bien
	printf("Bang cuu chuong\n");
  	//xuat ra nan hinh
	for (a=1;a<=10;a++){
		printf("Bang cuu chuong %d\n", a);
		for(b=1;b<=10;b++){
			printf("%d * %d = %d\n", a, b, a*b);
		}
	}
}

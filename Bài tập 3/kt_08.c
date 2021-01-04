#include <stdio.h>
int main(){
	//khai bao bien
	float a, b;
	printf ("Nhap a:");
	scanf ("%f", &a);
	
	printf ("Nhap b:");
	scanf ("%f", &b);
	
	if (a*b>0){
		printf ("\n cung dau", a, b);
	}else{
		printf ("\n khong cung dau", a, b);
	}

	return 0;
}



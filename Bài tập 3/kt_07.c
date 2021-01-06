#include <stdio.h>
int main(){
	int a, b, c;
	printf ("\n Nhap ba so a,b,c:");
	scanf ("%d%d%d", &a, &b, &c);
	if (a>0 && b>0 && c>0){
		if (abs (a-c)<b && b<(a+c));
		printf ("\nBa tao canh tao thanh mot tam giac !");
	}else{
		printf ("\nBa khong khong tao thanh mot tam giac !");
	}
 	}

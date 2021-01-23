// Khoi khi bao
#include <stdio.h>
int Sum(int a, int b, int c){
	return a+b+c;
}
//Khoi ham main
int main(){
	int x,y,z;
//Nhap du lieu
	printf("Nhap x: ");
		scanf("%d",&x);
	printf("\nNhap so y: ");
		scanf("%d",&y);
	printf("\nNhap so z: ");
		scanf("%d",&z);
	
	printf("%d",Sum(x,y,z));
}

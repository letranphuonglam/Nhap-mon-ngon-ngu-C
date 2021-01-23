// Khoi khai bao
#include <stdio.h>
int sum(int x, int y, int z);
//Khoi ham main
int main(){
	int x,y,z;
	printf("Nhap so x: ");
		scanf("%d",&x);
	printf("\nNhap so y: ");
		scanf("%d",&y);
	printf("\nNhap so z: ");
		scanf("%d",&z);
	
	printf("%d",Sum(x,y,z));
	return 0;
}
//khoi dinh nghia ham
int Sum(int x, int y, int z){
	return x+y+z;
}

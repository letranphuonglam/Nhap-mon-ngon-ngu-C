#include <stdio.h>
void Enter_number();
int max(int a, int b,int c);
int a,b,c;
//Khai bao cac so lon nhat a,b,c
void main(){
	Enter_number();
	printf("So lon nhat trong 3 so %d, %d, %d la: %d", a,b,c,max(a,b,c));
}


//Nhap du lieu
void Enter_number(){
	printf("Nhap 3 so a,b,c\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
}

//Gia tri lon nhat
int max(int a, int b,int c){
	int max=0;
	if (max < a){
		max=a;
	}
	if (max < b){
		max=b;
	}
	if (max < c){
		max=c;
	}
	return max;
}

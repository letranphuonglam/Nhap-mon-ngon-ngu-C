#include <stdio.h>
#include <math.h>
void Enter_number();
void result(int a,int b,int c);
int a,b,c;
float delta,x,x1,x2;

void main(){
	//Nhap phuong trinh
	Enter_number();
	
	//Tinh nghiem cua phuong trinh
	result(a,b,c);
}

void Enter_number(){
	//Nhap phuong trinh
	printf("Phuong trinh co dang ax^2 + bx + c = 0\n");
	printf("Nhap hang so phuong trinh\n");
	printf("a = ");scanf("%d",&a);
	printf("b = ");scanf("%d",&b);
	printf("c = ");scanf("%d",&c);
}

void result(int a,int b,int c){
	//ham pow(a,b) tra ve gia tri la a^b 
	delta=pow(b,2)-4*a*c;
	
	//Tinh nghiem cua phuong trinh
	if (delta >0){
		x1=(-b + sqrt(delta))/(2*a);
		x2=(-b - sqrt(delta))/(2*a);
		printf("Phuong trinh %dx^2 + %dx + %d = 0 co 2 nghiem\n",a,b,c);
		printf("x1 = %.2f\n",x1);
		printf("x2 = %.2f\n",x2);
	}
	else if (delta == 0){
		x= -b/(2*a);
		printf("Phuong trinh %dx^2 + %dx + %d = 0 có nghiem kep\n",a,b,c);
		printf("x = %.f\n",x);
	}
	else{
		printf("Phuong trinh %dx^2 + %dx + %d = 0 vo nghiem\n",a,b,c);
	}
}

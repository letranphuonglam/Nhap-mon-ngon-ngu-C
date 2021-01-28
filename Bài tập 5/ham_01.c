//khoi khai bao
#include <stdio.h>

// khai bao ham sum
int sum(int a,int b,int c);
// khoi ham main 
int main() {
int a,b,c;// goi ham sum
printf("Nhap 3 so nguyen tu ban phim:\n");
	printf("a = ");
	scanf("%d",&a);// nhap a

	printf("b = ");
	scanf("%d",&b);// nhap b

	printf("c = ");
	scanf("%d",&c);// nhap c

printf("a + b + c = %d",sum(a,b,c));

  return 0;
}
// khoi dinh nghia ham
int sum(int a,int b,int c){
  return a + b + c;
}



// Khong co kieu du lieu tra ve (void)

// khoi khai bao
#include <stdio.h>

// khai bao ham sum
void sum(int a,int b,int c);
// khoi ham main 
int main() {
int x,y,z;// goi ham sum
printf("Nhap 3 so nguyen tu ban phim:\n");
	printf("x = ");
	scanf("%d",&x);// nhap x

	printf("y = ");
	scanf("%d",&y);// nhap y

	printf("z = ");
	scanf("%d",&z);// nhap z

	sum(x,y,z);

  return 0;
}
// khoi dinh nghia ham
void sum(int a,int b,int c){
int d = a + b + c;
printf("x + y + z = %d",d);
   
}

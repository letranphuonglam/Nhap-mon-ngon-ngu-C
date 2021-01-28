#include <stdio.h>
int Enter_number();
int result(int n);
//khai bao
void main(){
	int n=Enter_number();
	
	printf("Tong tu 1 toi %d = %d",n,result(n));
}

//Nhap so n
int Enter_number(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	return n;
}
//Tinh so nguyen duong n
int result(int n){
	int sum=0,i;
	for (i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}


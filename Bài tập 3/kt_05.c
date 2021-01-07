#include<stdio.h>

int main(){
    int n,i,sum=0;
	
	//khai bao tong cac chu so
    printf("Nhap so n: ");
	scanf("%d",&n);
   
	for(;n!=0;n=n/10){
        i = n % 10; 
        sum += i;
    }    
    printf("%d",sum);
    return 0;
}

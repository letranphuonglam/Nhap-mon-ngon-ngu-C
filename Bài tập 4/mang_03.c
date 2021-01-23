#include <stdio.h>

int main(){
	//Khai bao bien a mang kich thuoc 100 (0<n<=100)
  int a[100];
	int b,n;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	
	// Nhap cac phan tu
	for (b=0;b<n;b++){
		printf("Nhap phan tu thu %d: ", b+1);
		scanf("%d",&a[b]);
	}
	
	//xuat tat ca phan tu cua mang
	printf("\nMang a ");
	for (b=0;b<n;b++){
		printf(" %d ", a[b]);
	}
		printf("\n\n");

	//Hien thi tong cac so phan tu mang
	int count_odd=0,count_even=0,count_0=0;
	for (b=0; b<n; b++){
		if (a[b]%2 != 0){
			count_odd+=1;
		}
		else if (a[b] == 0){
			count_0+=1;
		}
		else if (a[b]%2 == 0){
			count_even+=1;
		}
	}
	printf("Mang co %d so le, %d so chan, %d so 0\n",count_odd,count_even,count_0);
	
	//xuat cac phan tu
	printf("\nCac so le: ");
	for(b=0;b<n;b++){
		if (a[b]%2 != 0){
			printf("%d  ",a[b]);
		}
	}
	
	printf("\nCac so chan: ");
	for(b=0;b<n;b++){
		if (a[b]%2 == 0 && a[b]!=0){
			printf("%d  ",a[b]);
		}
	}

}

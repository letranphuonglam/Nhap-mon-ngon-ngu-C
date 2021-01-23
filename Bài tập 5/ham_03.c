//Khoi khai bao
#include<stdio.h>

void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
void Dem_chan_le_0(int a[]);

 //khoi ham main
int main(){
	int n;

  	printf("Nhap n = ");
  	scanf("%d", &n);
  	int a[n];
 	
	Nhap_pt_mang(a);
	Hien_thi_pt_mang(a);
 	Hien_thi_tong_chan(a);
  	Dem_chan_le_0(a);
  return 0;
}

// khoi dinh nghia ham
void Nhap_pt_mang(int a[]){
	int count;
	for (count=0;count<n;count++){
		printf("Nhap a[%d]= ",count);
		scanf("%d",&a[count]);
	}
}

void Hien_thi_pt_mang(int a[]){
	int count;
	printf("mang a[");
	for (count=0;count<n;count++){
		printf(" %d ",a[count]);
	}
	printf("]\n");
}

void Hien_thi_tong_chan(int a[]){
	int count,even_sum=0;
	for (count=0;count<n;count++){
		if (a[count]%2==0){
			even_sum+=a[count];
		}
	}
	printf("Tong cac so chan trong mang = %d\n",even_sum);
}

void Dem_chan_le_0(int a[]){
	int count,count_even=0,count_odd=0;
	for (count=0;count<n;count++){
		if (a[count]%2==0){
			count_even+=1;
		}
		else{
			count_odd+=1;
		}
	}
	printf("Mang co %d so chan, %d so le",count_even,count_odd);
}

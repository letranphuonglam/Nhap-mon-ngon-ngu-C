//Khoi khai bao
#include<stdio.h>
void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
void Dem_chan_le_0(int a[]);
int n;
//khoi ham main
int main(){

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
	int i;
	for (i=0;i<n;i++){
		printf("Nhap a[%d]= ", i);scanf("%d",&a[i]);
	}
}

void Hien_thi_pt_mang(int a[]){
	int j;
	printf("Mang a:");
	for (j=0;j<n;j++){
		printf(" %d ",a[j]);
	}
	printf("\n");
}

void Hien_thi_tong_chan(int a[]){
	int i,even_sum=0;
	for (i=0;i<n;i++){
		if (a[i]%2==0){
			even_sum+=a[i];
		}
	}
	printf("Tong cac so chan trong mang = %d\n",even_sum);
}

void Dem_chan_le_0(int a[]){
	int j,j_even=0,j_odd=0;
	for (j=0;j<n;j++){
		if (a[j]%2==0){
			j_even+=1;
		}
		else{
			j_odd+=1;
		}
	}
	printf("Mang co %d so chan, %d so le",j_even,j_odd);
}

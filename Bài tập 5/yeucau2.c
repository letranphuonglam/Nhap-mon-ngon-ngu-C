//Viet chuong trinh nhap vao 1 so tu nhien bat ky va kiem tra xem so do co phai la so hoan hao hay khong?
#include <stdio.h>

int main(){
    int n, tong = 0, i;////tao ra mot bien tong gia tri ban dau = 0
    printf("Nhap so n bat ky: ");
    scanf("%d",&n);//nhap n tu ban phim
    for(i = 1 ; i < n ; i++) {
    	if(n % i == 0) {
    		tong = tong + i;//tinh tong cac uoc
    	}
    }
	if(tong == n) {//dem so sanh gia tri cua tong va n ban dau 
        printf("[%d] la so hoan hao",n); //neu bang nhau thi la so hoan hao
    } else {
        printf("[%d] khong phai la so hoan hao",n);//neu khong thi khong phai so hoan hao
    }
    return 0;
}
//Viet chuong trinh nhap vao so nguyen duong n bat ki va tinh: S = 1/1 + 1/2 + 1/3 + ... + 1/n
#include <stdio.h>
 
int main()
{
    int n,i;//khai bao bien
    float S = 0;
    do
    {
        printf("Nhap so nguyen duong n : ");
        scanf("%d",&n);//nhap so bat ki
    }
    while (n <= 0);
 
    for(i = 1;i <= n;i++)
    {
        S +=1/(float)i;
    }
    printf("S = 1/1 + 1/2 + 1/3 + ... + 1/n ",n);
    printf("\nTong = %f",S);//in ra tong
    getch();
}

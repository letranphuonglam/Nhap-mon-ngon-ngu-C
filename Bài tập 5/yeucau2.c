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

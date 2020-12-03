#include <stdio.h>

int main(void)
{
// khai bao bien R kieu double
double R = 2.5 ;
const float PI = 3.14;
// khai bao cac bien CV,DT
double CV,DT ;
//khai bao CV 2*R*PI
CV = 2*R*PI ;
//khai bao DT R*R*PI
DT = R*R*PI ;
//hien thi ra man hinh chu vi va dien tich
printf ("CV\t DT \n %0.1f %0.1f",CV ,DT);


getchar();
return 0;
}

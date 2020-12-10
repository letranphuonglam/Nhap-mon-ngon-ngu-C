#include <stdio.h>
  
void main(){
    int n;
  
    printf("Nhap mot so: \n");
    scanf("%d", &n);
    if ( n == 0){
        printf("%d bang 0 \n", n);
    }else if ( n % 2==0){
        printf("%d la so chan  \n", n);
    }else
        printf ("a la so le ");
return 0; 
}


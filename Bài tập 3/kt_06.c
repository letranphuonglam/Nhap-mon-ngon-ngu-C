#include <stdio.h>
int main(){
	int n,i,j,h;
	printf ("Nhap n");
	scanf ("%d", &n);
	for (i=1;i<=n;i++){
		for (j=n-1;j>=i;j--){
			printf (" ");
		}
		for (h=1;h<=2*i-1;h++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
	} 

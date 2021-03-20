int main() {
	int a, b;//khai bao bien
	printf("Nhap a,b: ");
	scanf("%d", &a);
	
	scanf("%d", &b);
	
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("Khong ton tai UCLN\n");
		} else if(a == 0 || b == 0) {

		} else {// a, b 
			int bc = a * b;
			
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}

			}
			
			printf("UCLN cua a va b la %d\n", a);
		}
	 else {
		printf("Nhap a,b: ");
	}
	
	return 0;
}

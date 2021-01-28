// Khoi khai bao
#include <stdio.h>

int x = 1, y = 2;

void ham_a(int x);
void ham_b();

//Khoi ham main
int main(void) {
int x = 3;
printf("%d", x);
printf("%d", y);
ham_a(x);
ham_b();
return 0;
}
//Khoi dinh nghia ham
void ham_a(int x){
x = 5;
printf("%d", x);
}
y = 2;
void ham_b(){
printf("%d", y);
}

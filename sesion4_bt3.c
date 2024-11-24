#include<stdio.h>
int main(){
	int n;
	printf(" moi ban nhap so nguyen ");
	scanf("%d", &n);
	if(n % 3 == 0 && n % 5 == 0){
	}else if (n % 3 == 0) {
        printf("So %d chi chia het cho 3\n", n);
    } else if (n % 5 == 0) {
        printf("So %d chi chia het cho 5\n", n);
    } else {
        printf("So %d khóng chia het cho 3 hoac 5\n", n);
    }
    return 0;
}

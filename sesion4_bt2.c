#include<stdio.h>
int main(){
	int number;
	printf("moi ban nhap so can kiem tra ");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("%d la so chan\n", number);
	} else{
		printf("%d la so le\n", number);
	}
	return 0;
}
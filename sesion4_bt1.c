#include<stdio.h>
int main(){
	int number;
	printf(" moi ban nhap mot so nguyen bat ki ");
	scanf("%d",&number);
	if(number<0){
		printf("%d là so nguyen am", number);
    }
    if(number>0){
		printf("%d là so nguyen duong", number);		
	}
}

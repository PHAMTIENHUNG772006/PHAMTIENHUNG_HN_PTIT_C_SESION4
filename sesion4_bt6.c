#include<stdio.h>
int main(){
	
    float sum, fMonth,lMonth ;
	printf(" nhap so dien dau thang ");
	scanf("%f", &fMonth);
	printf(" nhap so dien cuoi thang ");
	scanf("%f", &lMonth);
	sum = lMonth - fMonth;
	
	if(0 <= sum < 50){
	printf("so tien dien ban phai tra là %.1f", sum*10000);
	} else if(50 <= sum < 100){
	printf("so tien dien ban phai tra là %.1f", sum*15000);
	} else if(100 <= sum < 150){
	printf("so tien dien ban phai tra là %.1f", sum*20000);
	} else if(150 <= sum < 200){
	printf("so tien dien ban phai tra là %.1f", sum*25000);
	} else if(200 <= sum){
	printf("so tien dien ban phai tra là %.1f", sum*30000);

	}
	return 0;
	

} 


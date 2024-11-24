#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	printf("Moi ban nhap a ");
	scanf("%f", &a);
	printf("Moi ban nhap b ");
	scanf("%f", &b);
	printf("Moi ban nhap c ");
	scanf("%f", &c);
	if((a == b) &&(a == c) && (c == b)){
		printf("day la tam giac vuong");
	}else if(a == 0 || b ==0  || c == 0 ){
		printf("ba canh a,b,c khong the tao thanh tam giac");
	}else {
	    printf("ba canh a,b,c tao thanh tam giac");
	}
   
	return 0;
}

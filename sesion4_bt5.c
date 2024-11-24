#include<stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap ba so nguyen a, b, c\n");
	printf("Moi ban nhap so nguyen a ");
	scanf("%d", &a);
	printf("Moi ban nhap so nguyen b ");
	scanf("%d", &b);
	printf("Moi ban nhap so nguyen c ");
	scanf("%d", &c);
	if((c > a && c < b) || (a < c && b > c)){
		printf("so thu ba  nam giua hai so con lai");
	} else{
		printf("so thu ba khong  nam giua hai so con lai");
	
}
return 0;
}

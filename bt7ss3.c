#include<stdio.h>
#include<math.h>
int main()
{
	int number,hangnghin,hangchuc,hangtram,hangdonvi,tong;
	printf("nhap so: ");
	scanf("%d",&number);
	
	hangnghin= (number%10000)/1000;
	hangtram= (number%1000)/100;
	hangchuc= (number%100)/10;
	hangdonvi= number%10;
	tong=+hangnghin+hangchuc+hangtram+hangdonvi;
	
	printf("hangnghin: %d\n",hangnghin);
	printf("hangtram: %d\n",hangtram);
	printf("hangchuc: %d\n",hangchuc);
	printf("hangdonvi: %d\n",hangdonvi);
	printf("tong cac chu so: %d",tong);
	return 0;
	
}


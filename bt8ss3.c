#include<stdio.h>
#include<math.h>
int main()
{
	int number,result,hangnghin,hangchuc,hangtram,hangdonvi;
	printf("nhap so: ");
	scanf("%d",&number);
	hangdonvi=number%10;
	hangchuc= (number%100)/10;
	hangtram= (number%1000)/100;
	hangnghin= (number%10000)/1000;
	
	result= hangdonvi*1000+hangchuc*100+hangtram*10+hangnghin;
	
	printf("so dao nguoc la: %d",result);
}


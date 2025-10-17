#include<stdio.h>
#include<math.h>
int main()
{
	float F,C;
	
	printf("nhap nhiet do C: ");
	scanf("%f",&C);
	
	F=C*9/5+32;
	
	printf("nhiet do F sau khi doi la: %.2f",F);
	return 0;
	
}


#include<stdio.h>
#include<math.h>
int main()
{
	float a,chuvi,dientich;
	
	printf("nhap ban kinh hinh tron: ");
	scanf("%f",&a);
	
	chuvi=2*M_PI*a;
	dientich=M_PI*a*a;
	
	printf("chu vi hinh tron la: %.2f\n",chuvi);
	printf("dien tich hinh tron la: %.2f",dientich);
	
	return 0;
}


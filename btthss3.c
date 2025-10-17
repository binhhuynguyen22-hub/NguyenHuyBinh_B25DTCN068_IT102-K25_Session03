#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	double S;
	printf("nhap so a (a>0): ");
	scanf("%d",&a);
	
	printf("nhap so b (b>0): ");
	scanf("%d",&b);
	
	S= (sqrt(pow(a,2)+pow(b,2))/(a+b))+ ((sqrt(a) +sqrt(b))/(a*b));
	
	printf("gia tri bieu thuc la: %.2lf",S);
	return 0;
	
	
}


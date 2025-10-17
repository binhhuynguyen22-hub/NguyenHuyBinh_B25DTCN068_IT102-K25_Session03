#include<stdio.h>
#include<math.h>
int main()
{
	int canhday,chieucao;
	float dientich;
	
	printf("nhap canh day: ");
	scanf("%d",&canhday);
	
	printf("nhap chieu cao: ");
	scanf("%d",&chieucao);
	
	dientich=1.0/2*canhday*chieucao;
	
	printf("dien tich tam giac là: %.2f",dientich);
	return 0;
}


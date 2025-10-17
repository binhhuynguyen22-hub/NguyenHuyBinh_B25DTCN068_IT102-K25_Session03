#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float A;
	printf("nhap so n (n>1): ");
	scanf("%d",&n);
	
	A = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));
	
	printf("gia tri cua bieu thuc la: %.5f",A);
	return 0;
}


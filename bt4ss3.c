#include<stdio.h>
#include<math.h>
int main()
{
	float diemtoan,diemvan,diemanh,tongdiem,diemtrungbinh;
	
	printf("nhap diem toan: ");
	scanf("%f",&diemtoan);
	
	printf("nhap diem van: ");
	scanf("%f",&diemvan);
	
	printf("nhap diem anh: ");
	scanf("%f",&diemanh);
	
	tongdiem=diemtoan+diemvan+diemanh;
	diemtrungbinh=(diemtoan+diemvan+diemanh)/3;
	
	printf("tong diem la: %.2f\n",tongdiem);
	printf("diem trung binh la: %.2f",diemtrungbinh);
	return 0;
}


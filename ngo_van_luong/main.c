#include<stdio.h>
#include"toan.h"
void main()
{
	int n = 0;
	printf("nhap so dien:");
	scanf_s("%d", &n);
	if (n <= 50)
		printf("so tien phai tra la: %d", bac1(n));
	else if (n <= 100)
		printf("so tien phai tra la: %d", bac1(50) + bac2(n-50));
	else if (n <= 200)
		printf("so tien phai tra la: %d", bac1(50) + bac2(50) + bac3(n-100));
	else if (n <= 300)
		printf("so tien phai tra la: %d", bac1(50) + bac2(50) + bac3(100) + bac4(n-200));
	else if (n <= 400)
		printf("so tien phai tra la: %d", bac1(50) + bac2(50) + bac3(100) + bac4(100) + bac5(n-300));
	else
		printf("so tien phai tra là: %d", bac1(50) + bac2(50) + bac3(100) + bac4(100) + bac5(100) + bac6(n-400));
}
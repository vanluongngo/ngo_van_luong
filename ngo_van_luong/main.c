#include<stdio.h>
#include"toan.h"
void main()
{
	int x = 0;
	int y = 0;
	printf("Nhap 2 so:\n");
	scanf_s("%d\n%d", &x,&y);
	printf("Cong: %d\n", cong(x,y));
	printf("Tru: %d\n", tru(x, y));
	printf("Nhan: %d\n", nhan(x, y));
	printf("Chia: %f\n", chia(x, y));

}
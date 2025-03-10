#include<stdio.h>
void main()
{
	int tien_gui = 0;
	float lai_suat = 0;
	int so_nam = 0;
	printf("nhap so tien: ");
	scanf_s("%d", &tien_gui);
	printf("nhap lai suat moi nam: ");
	scanf_s("%f", &lai_suat);
	printf("nhap so nam gui: ");
	scanf_s("%d", &so_nam);
	for (int i = 0; i <= so_nam; i++)
	{
		tien_gui = tien_gui * (1 + lai_suat);
	}
	printf("so tien nhan duoc sau %d la:%d", so_nam, tien_gui);
}
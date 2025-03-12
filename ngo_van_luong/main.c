#include<stdio.h>
#include"toan.h"
void main()
{
	int tong_so_le = 0;
	int j = 0;
	int arr[9] = { 1, 5, 4, 8, 9, 3, 4, 7, 1001 };
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] % 2 == 1)
		{
			tong_so_le += arr[i];
			j++;
		}
	}
	if(j>0)
		printf("trung binh cong cac so le trong mang la: %d", tong_so_le / j);
	else
		printf("mang da cho khong co so le");
}
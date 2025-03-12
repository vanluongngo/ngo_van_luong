#include<stdio.h>
#include"toan.h"
void main()
{
	int j = 0;
	int max = 0;
	int arr[9] = { 1, 5, 4, 8, 9, 3, 4, 7, 1001 };
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			j = i;
		}
	}

	printf("vi tri của so lon nhat trong mang la: %d", j);

};
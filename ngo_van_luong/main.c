#include<stdio.h>
void main()
{
	int chu_in_hoa = 0;
	char str[] = "Ngo Van Luong";
	for (int i = 0;str[i]!=0;i++)
	{
		if (str[i] >='A' && str[i]<='Z')
		{
			chu_in_hoa++;
		}
	}
	printf("so ky tu in hoa trong chuoi la: %d", chu_in_hoa);
}
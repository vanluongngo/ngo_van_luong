#include<stdio.h>
void main()
{
	char str[] = "Ngo Van Luong";
	int i = 0;
	while (str[i] != 0)
		i++;
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i];
		}
		else
			str[i] = str[i] + 32;
	}
	printf("so ky tu in hoa trong chuoi la: %s", str);
}
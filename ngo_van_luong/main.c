#include<stdio.h>
void main()
{
	char str[] = "Ngo Van Luong";
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i];
		}
		else if (str[i] >= 97 && str[i]<=122)
			str[i] = str[i] -32;
		i++;
	}
	printf("so ky tu in hoa trong chuoi la: %s", str);
}
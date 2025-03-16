//hàm in ra s? l? trong m?ng
int sole(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf(" %d",arr[i]);
		}
	}
}
//tính tổng các giá trị trong mảng//
int tong_gia_tri_trong_mang(int* arr, int so_luong)
{
	
	int sum = 0;
	for (int i = 0;i< so_luong; i++)
	{
		sum += arr[i];
	}
	return sum;
}

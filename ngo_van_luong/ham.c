
//tính tổng các giá trị trong mảng//
int tong_gia_tri_trong_mang(int* arr, int so_luong)
{

	int sum = 0;
	for (int i = 0; i < so_luong; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//Chức năng: Cộng 2 số nguyên
//Input:
//	int a: Số nguyên thứ nhất
//	int b: Số nguyên thứ hai
//Output:
//	int: Kết quả của phép tính

int cong(int a, int b)
{
	int tong = 0;
	tong = a + b;
	return tong;
}
//Chức năng: Trừ 2 số nguyên
//Input:
//	int a: Số nguyên thứ nhất
//	int b: Số nguyên thứ hai
//Output:
//	int: Kết quả của phép tính
int tru(int a, int b)
{
	int hieu = 0;
	hieu = a - b;
	return hieu;
}
//Chức năng: Nhân 2 số nguyên
//Input:
//	int a: Số nguyên thứ nhất
//	int b: Số nguyên thứ hai
//Output:
//	int: Kết quả của phép tính
int nhan(int a, int b)
{
	int tich = 0;
	tich = a * b;
	return tich;
}
//Chức năng: Chia 2 số nguyên
//Input:
//	int a: Số nguyên thứ nhất
//	int b: Số nguyên thứ hai
//Output:
//	float: Kết quả của phép tính
float chia(float a, float b)
{
	float thuong = 0;
	thuong = a / b;
	return thuong;
}
/*Kwh từ 0-50 -->1678VND/1Kwh*/
int bac1(int a)
{
	int bac1 = 0;
	bac1 = a * 1678;
	return bac1;
}
/*Kwh từ 51-100 -->1734VND/1Kwh*/

int bac2(int a)
{
	int bac2 = 0;
	bac2 = (a) * 1734;
	return bac2;
}
/*Kwh từ 101-200 -->1734VND/1Kwh*/

int bac3(int a)
{
	int bac3 = 0;
	bac3 = (a) * 2014;
	return bac3;
}
/*Kwh từ 201-300 -->2536VND/1Kwh*/

int bac4(int a)
{
	int bac4 = 0;
	bac4 = (a) * 2536;
	return bac4;
}
/*Kwh từ 301-400 -->2834VND/1Kwh*/

int bac5(int a)
{
	int bac5 = 0;
	bac5 = (a) * 2834;
	return bac5;
}
//Kwh từ 401 trở lên-->2927VND/1Kwh

int bac6(int a)
{
	int bac6 = 0;
	bac6 = (a) * 2927;
	return bac6;
}
//Chức năng: Đếm số ký tự trong chuỗi
//Input: nhập vào chuỗi
//Output: in ra số ký tự trong chuỗi
int count(char str[])
{
	int count = 0;
	int i = 0;
	while (str[i] != 0)
	{
		i++;
		count++;
	}
	return count;
}
//Chức năng: Đếm số ký tự space trong chuỗi
//Input: nhập vào chuỗi
//Output: in ra số ký tự space trong chuỗi
int count_space(char str[])
{
	int count = 0;
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 32)
		{
			count++;
		}
		i++;
	}
	return count;
}//Chức năng: Chuyển đổi chữ thường thành chữ IN HOA
//Input: nhập vào chuỗi
//Output: in ra chuỗi IN HOA
void in_hoa(char str[])
{
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97&&str[i]<=122)
		{
			str[i] =str[i]-32;
		}
		i++;
	}
	return;
}
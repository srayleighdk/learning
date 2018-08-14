#include <stdio.h>
#include <conio.h>
void XuatTong(int x, int y)
{
	int Tong;
	Tong = x + y;
	printf_s("\n%d + %d = %d", x, y, Tong);
}
//int TinhTong(int a, int b)
//{
//	return a + b;
//}
//int TinhHieu(int a, int b)
//{
//	return a - b;
//}
//int TinhTich(int a, int b)
//{
//	return a * b;
//}
//float TinhThuong(float a, float b)
//{
//	if (b == 0) {
//		printf_s("\n b==0 nen khong chia duoc.");
//		return a;
//	}
//	else {
//	return float(a / b);
//
//	}
//}
float XuLyTinhToan(int a, int b, char pheptoan)
{
	if (pheptoan == '+') {
		return a + b;
	}
	if (pheptoan == '-') {
		return a - b;
	}
	if (pheptoan == '*') {
		return a * b;
	}
	return b == 0 ? a : (float) a / b;
}
int main()
{
	int a, b;
	printf_s("\nNhap a =");
	scanf_s("%d", &a);
	printf_s("\nNhap b =");
	scanf_s("%d", &b);
	//XuatTong(a, b);
	int Tong = XuLyTinhToan(a, b, '+');
	int Hieu = XuLyTinhToan(a, b, '-');
	int Tich = XuLyTinhToan(a, b, '*');
	float Thuong = XuLyTinhToan(a, b, '/');
	printf_s("\n Tong = %d", Tong);
	printf_s("\n Hieu = %d", Hieu);
	printf_s("\n Tich =%d", Tich);
	printf_s("\n Thuong =%f", Thuong);
	/*int Tong = TinhTong(a, b);
	int Hieu = TinhHieu(a, b);
	int Tich = TinhTich(a, b);
	float Thuong = TinhThuong(a, b);*/
	_getch();
	return 0;
}
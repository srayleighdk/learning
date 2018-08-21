#include <stdio.h>
#include <conio.h>
#define MAX 100
//Nhập xuất mảng hai chiều với 1 vòng lập for
void NhapMaTran(int a[][MAX], int n)
{
	for (int i = 0; i < n * n; i++)
	{
		printf_s("\nNhap vao a[%d][%d] = ", i / n, i % n);
		scanf_s("%d", &a[i / n][i % n]);
	}
}
void XuatMaTran(int a[][MAX], int n)
{
	for (int i = 0; i < n * n; i++)
	{
		printf_s("%4d", a[i / n][i % n]);
		if ((i + 1) % n == 0)
		{
			printf_s("\n");
		}
	}
}
int TongDong(int a[][MAX], int chisodong, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[chisodong][i];
	}
	return Tong;
}
void TongTungDong(int a[][MAX], int n)
{
	//Cách 1:
	/*for (int i = 0; i < n; i++)
	{
		int Tong = TongDong(a, i, n);
		printf_s("\nTong dong %d la : %d", i, Tong);
	}*/
	//Cách 2:
	for (int i = 0; i < n; i++)
	{
		int Tong = 0;
		for (int j = 0; j < n; j++)
		{
			Tong += a[i][j];
		}
		printf_s("\nTong dong %d la: %d", i, Tong);
	}
}
int TichCot(int a[][MAX], int chisocot, int n)
{
	int Tich = 1;
	for (int i = 0; i < n; i++)
	{
		Tich *= a[i][chisocot];
	}
	return Tich;
}
void TichTungCot(int a[][MAX], int n)
{
	//Cách 1:
	/*for (int i = 0; i < n; i++)
	{
		int Tich = TichCot(a, i, n);
		printf_s("\nTich Cot %d la: %d", i, Tich);
	}*/
	//Cách 2:
	for (int i = 0; i < n; i++)
	{
		int Tich = 1;
		for (int j = 0; j < n; j++)
		{
			Tich *= a[j][i];
		}
		printf_s("\n Tich cot %d la: %d", i, Tich);
	}
}

int main()
{
	int a[MAX][MAX], n;
	do
	{
		printf_s("\n Nhap vao n:");
		scanf_s("%d", &n);
		if (n < 1 || n > 100)
		{
			printf_s("\nn khong hop le. Xin kiem tra lai !");
		}
	} while (n < 1 || n > 100);
	NhapMaTran(a, n);
	XuatMaTran(a, n);
	int chisodong = 1;
	int Tong = TongDong(a, chisodong, n);
	printf_s("\nTong dong %d la : %d", chisodong, Tong);
	int chisocot = 0;
	int Tich = TichCot(a, chisocot, n);
	printf_s("\n Tich dong %d la : %d", chisocot, Tich);
	TongTungDong(a, n);
	TichTungCot(a, n);
	_getch();
	return 0;
}
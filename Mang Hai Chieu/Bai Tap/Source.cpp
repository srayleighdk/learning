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
	_getch();
	return 0;
}
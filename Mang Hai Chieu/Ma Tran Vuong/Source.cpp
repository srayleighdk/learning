#include <stdio.h>
#include <conio.h>
#define MAX 100
// Hàm nhập mảng
void NhapMang(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf_s("\nNhap vao a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}


int main()
{
	int a[MAX][MAX], n;
	do
	{
		printf_s("\nNhap vao n ( n la so dong, so cot) = ");
		scanf_s("%d", &n);
		if (n < 1 || n > 100)
		{
			printf_s("\n n khong hop le !");
		}
	} while (n < 1 || n > 100);
	NhapMang(a, n);
	XuatMang(a, n);
	_getch();
	return 0;
}
//Nhập xuất mãng bằng con trỏ mảng
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void NhapMang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf_s("\nNhap vao a[%d]", i);
		scanf_s("%d", &a[i]);
	}
}

void XuatMang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf_s("%4d", a[i]);
	}
}

int main()
{
	int n;
	do
	{
		printf_s("\nNhap vao n: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf_s("\nn khong hop le xin kiem tra lai!");
		}
	} while (n < 0);
	int *a;
	a = (int *)malloc(n *sizeof(int));
	NhapMang(a, n);
	XuatMang(a, n);
	free(a);
	_getch();
	return 0;
}
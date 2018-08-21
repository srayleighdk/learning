#include <stdio.h>
#include <conio.h>
#define MAX 100
void NhapMang(int a[][MAX], int sodong, int socot)
{
	for (int i = 0; i < sodong; i++)
	{
		for (int j = 0; j < socot; j++)
		{
			printf_s("\nNhap vao a[%d][%d]= ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX], int sodong, int socot)
{
	for (int i = 0; i < sodong; i++)
	{
		for (int j = 0; j < socot; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}

int main()
{
	int a[MAX][MAX], sodong, socot;
	do
	{
		printf_s("\nNhap so dong = ");
		scanf_s("%d", &sodong);
		if (sodong < 1 || sodong > 100)
		{
			printf("\nSo dong khong hop le !");
		}
	} while (sodong<1 || sodong> 100);
	do
	{
		printf_s("\nNhap vao so cot = ");
		scanf_s("%d", &socot);
		if (socot < 1 || socot > 100)
		{
			printf_s("\nSo cot khong hop le !");
		}
	} while (socot < 1 || socot > 100);
	NhapMang(a, sodong, socot);
	XuatMang(a, sodong, socot);
	_getch();
	return 0;
}
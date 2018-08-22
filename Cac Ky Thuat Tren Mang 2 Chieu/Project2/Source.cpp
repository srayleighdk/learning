#include <stdio.h>
#include <conio.h>
#define MAX 100
void NhapMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("\nNhap a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}
int TongBien(int a[][MAX], int dong, int cot)
{
	int Tong = 0;
	for (int i = 0; i < cot; i++)
	{
		Tong += a[0][i] + a[dong - 1][i];
	}
	for (int j = 1; j < dong - 1; j++)
	{
		Tong += a[j][0] + a[j][cot - 1];
	}
	return Tong;
}



int main()
{
	int a[MAX][MAX], dong, cot;
	do
	{
		printf("\nNhap vap dong:");
		scanf_s("%d", &dong);
		if (dong < 1 || dong > 100)
		{
			printf_s("\nDong khong hop le!");
		}
	} while (dong < 1 || dong > 100);
	do
	{
		printf("\nNhap vap cot:");
		scanf_s("%d", &cot);
		if (cot < 1 || cot > 100)
		{
			printf_s("\nCot khong hop le!");
		}
	} while (cot < 1 || cot > 100);
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	int Tong = TongBien(a, dong, cot);
	printf_s("\nTong bien la: %d", Tong);

	_getch();
	return 0;
}
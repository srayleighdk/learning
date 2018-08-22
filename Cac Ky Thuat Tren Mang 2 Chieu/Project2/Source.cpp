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
//Đếm số dương trên mỗi dòng
void SoDuongTrenMoiDong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		int dem = 0;
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] > 0)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
		printf_s("\ndong %d co so luong so duong la: %d", i, dem);
		}
		else
		{
			printf_s("\nKhong co so duong nao");
		}
	}
}
//Bai Tap: Tim phan tu Yen Ngua trong mang 2 chieu
int TimMaxDong(int a[][MAX], int chisodong, int cot, int &vitricot)
{
	vitricot = 0;
	int MaxDong = a[chisodong][0];
	for (int i = 1; i < cot; i++)
	{
		if (a[chisodong][i] > MaxDong)
		{
			MaxDong = a[chisodong][i];
			vitricot = i;
		}
	}
	return MaxDong;
}
int TimMinCot(int a[][MAX], int dong, int chisocot)
{
	int MinCot = a[0][chisocot];
	for (int i = 1; i < dong; i++)
	{
		if (a[i][chisocot] < MinCot)
		{
			MinCot = a[i][chisocot];
		}
	}
	return MinCot;
}
void YenNgua(int a[][MAX], int dong, int cot)
{
	printf_s("\nPhan tu Yen Ngua la: ");
	for (int i = 0; i < dong; i++)
	{
		int vitricot;
		int MaxDong = TimMaxDong(a, i, cot, vitricot);
		int MinCot = TimMinCot(a, dong, vitricot);
		if (MaxDong == MinCot)
		{
			printf_s("%4d", MaxDong);
		}
	}
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
	YenNgua(a, dong, cot);

	_getch();
	return 0;
}
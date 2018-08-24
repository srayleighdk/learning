#include <stdio.h>
#include <conio.h>
#define MAX 100
#include <math.h>
void NhapMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("\nNhap vao a[%d][%d]", i, j);
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
//Liệt kê các số chẵn có trong mảng
void LKChan(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac so chan trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf_s("%d    ", a[i][j]);
			}
		}
	}
}
//Liệt kê cac số nguyên số trong mảng
int KTNguyenTo(int x)
{
	if (x < 2)
	{
		return 0;
	}
	if (x > 2)
	{
		if (x % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= (int)sqrt(x); i += 2)
		{
			if (x % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
void LKNguyenTo(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac so nguyen to co trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (KTNguyenTo(a[i][j]) == 1)
			{
				printf_s("%d   ", a[i][j]);
			}
		}
	}
}
//Liệt kê các số hoàn thiện có trong mảng..( số hoàn thiện là số mà tổng ước chung của nó bằng chính nó.
int KTHoanThien(int x)
{
	int Tong = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			Tong += i;
		}
	}
	if (Tong == x)
	{
		return 1;
	}
	return 0;
}
void LKHoanThien(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac so hoan thien co trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (KTHoanThien(a[i][j]) == 1)
			{
				printf_s("%4d   ", a[i][j]);
			}
		}
	}
}
//4/ Tìm số chẵn đầu tiên/cuối cùng trong mảng
void LKChanDauCuoi(int a[][MAX], int dong, int cot)
{
	printf_s("\nSo chan dau tien xuat hien trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf_s("%d", a[i][j]);
				break;
			}
		}
		break;
	}
	printf_s("\nSo chan cuoi cung xuat hien trong mang la: ");
	for (int i = dong - 1; i >= 0; i--)
	{
		for (int j = cot - 1; j >= 0; j--)
		{
			if (a[i][j] % 2 == 0)
			{
				printf_s("%d", a[i][j]);
				break;
			}
		}
		break;
	}
}
//5/ Tính trung bình cộng các số dương có trong mảng.
float TrungBinhCongDuong(int a[][MAX], int dong, int cot)
{
	int Tong = 0;
	int dem = 0;
	float TBC;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] > 0)
			{
				dem++;
				Tong += a[i][j];
			}
		}
	}
	TBC = (float)Tong / dem;
	return TBC;
}
//6/ Tính trung bình tích các số lẻ có trong mảng.
float TrungBinhTichLe(int a[][MAX], int dong, int cot)
{
	int Tich = 1;
	int dem = 0;
	float TrungBinhTich;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				dem++;
				Tich *= a[i][j];
			}
		}
	}
	TrungBinhTich = pow(Tich, (float)1 / dem);
	return TrungBinhTich;
}
//7/ Tính tổng từng dòng trong mảng.
int TinhTongDong(int a[][MAX], int dong, int cot, int chisodong)
{
	int Tong = 0;
	for (int i = 0; i < cot; i++)
	{
		Tong += a[chisodong][i];
	}
	return Tong;
}
void TinhTongTungDongTrongMang(int a[][MAX], int dong, int cot)
{

	for (int i = 0; i < dong; i++)
	{
		int Tong = 0;
		Tong = TinhTongDong(a, dong, cot, i);
		printf_s("\nTong dong %d la: %d", i, Tong);
	}
}
//Cách 2
void TongTungDong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		int Tong = 0;
		for (int j = 0; j < cot; j++)
		{
			Tong += a[i][j];
		}
		printf_s("\nTong dong %d la: %d", i, Tong);
	}
}
//8/ Tính tổng từng cột trong mảng.
void TongTungCot(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < cot; i++)
	{
		int Tong = 0;
		for (int j = 0; j < dong; j++)
		{
			Tong += a[j][i];
		}
		printf_s("\nTong cot %d la: %d", i, Tong);
	}
}

int main()
{
	int a[MAX][MAX], dong, cot;
	do
	{
		printf("\nNhap vao dong: ");
		scanf_s("%d", &dong);
		if (dong < 1 || dong > 100)
		{
			printf_s("\nSo dong khong hop le.Xin kiem tra lai!");
		}
	} while (dong < 1 || dong > 100);
	do
	{
		printf("\nNhap vao so cot: ");
		scanf_s("%d", &cot);
		if (cot < 1 || cot > 100)
		{
			printf_s("\nSo cot khong hop le.Xin kiem tra lai!");
		}
	} while (cot < 1 || cot > MAX);
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	LKChan(a, dong, cot);
	LKNguyenTo(a, dong, cot);
	LKHoanThien(a, dong, cot);
	LKChanDauCuoi(a, dong, cot);
	float TBCDuong = (TrungBinhCongDuong(a, dong, cot));
	printf_s("\nTrung binh cong so duong co trong mang la: %f", TBCDuong);
	float TBTLe = TrungBinhTichLe(a, dong, cot);
	printf_s("\nTrung binh tich cac so le co trong mang la: %f", TBTLe);
	TinhTongTungDongTrongMang(a, dong, cot);
	TongTungDong(a, dong, cot);
	TongTungCot(a, dong, cot);
	_getch();
	return 0;
}
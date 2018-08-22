//Tính tổng và liệt kê các phần tử trên dường chéo chính
#include <stdio.h>
#include <conio.h>
#define MAX 100
void NhapMaTran(int a[][MAX], int n)
{
	for (int i = 0; i < n * n; i++)
	{
		printf_s("\n Nhap vao a[%d][%d] = ", i / n,i % n);
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
//Tính tổng và liệt ke trên dường cheo chính
void TinhTongLietkeDCC(int a[][MAX], int n)
{
	int Tong = 0;
	printf_s("\nPhan tu tren duong cheo chinh la: ");
	for (int i = 0; i < n; i++)
	{
		printf_s("%4d", a[i][i]);
		Tong += a[i][i];
	}
	printf("\n Tong duong cheo chinh la: %d", Tong);
}
//Liệt kê và tìm Min Max trên dường chéo phụ
void MinMaxLietKeDCP(int a[][MAX], int n)
{
	int Min, Max;
	Min = Max = a[0][n - 1];
	printf_s("\nPhan tu tren duong cheo phu la:");
	for (int i = 0; i < n; i++)
	{
		printf_s("%4d", a[i][n - 1 - i]);
		
		if (a[i][n - 1 - i] > Max)
		{
			Max = a[i][n - 1 - i];
		}
		
		
		if (a[i][n - 1 - i] < Min)
		{
			Min = a[i][n - 1 - i];
		}
		
	}
		printf_s("\nPhan tu Max la: %d", Max);

		printf_s("\nPhan tu Min la: %d", Min);

}
//Liệt kê và đếm số chẵn trong vùng tam giac trên chéo chinh
void LKvaDemChanTamGiacTrenDCC(int a[][MAX], int n)
{
	printf_s("\nCac phan tu tam giac tren cheo chinh la : ");
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			printf_s("%4d", a[i][j]);
			if (a[i][j] % 2 == 0)
			{
				dem++;
			}
		}
	}
	printf_s("\nSo chan co trong tam giac la : %d", dem);
}

int main()
{
	int a[MAX][MAX], n;
	do
	{
		printf_s("\n Nhap vao n :");
		scanf_s("%d", &n);
		if (n < 1 || n > 100)
		{
			printf_s("\nn khong hop le. XIn kiem tra lai !");
		}
	} while (n < 1 || n > 100);
	NhapMaTran(a, n);
	XuatMaTran(a, n);
	TinhTongLietkeDCC(a, n);
	MinMaxLietKeDCP(a, n); 
	LKvaDemChanTamGiacTrenDCC(a, n);
	_getch();
	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void NhapMang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf_s("\nNhap vap a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}

void XuatMang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int TimMax(int *a, int n)
{
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > Max)
		{
			Max = a[i];
		}
	}
	return Max;
}

int TimMin_1(int *a, int n)
{
	int *Min;
	Min = &a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < *Min)
		{
			*Min = a[i];
		}
	}
	return *Min;
}

int *TimMin_2(int *a, int n)
{
	int *Min = &a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < *Min)
		{
			Min = &a[i];
		}
	}
	return Min;
}
int main()
{
	int n;
	do
	{
		printf_s("\nNhap vao so luong phan tu mang  n = ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf_s("\nSo luong phan tu khong hop le. Xin kiem tra lai !");
		}
	} while (n < 0);
	int *a;
	a = (int *)malloc(n * sizeof(int));
	NhapMang(a, n);
	XuatMang(a, n);

	int Max = TimMax(a, n);
	printf_s("\nMax la : %d", Max);

	int Min_1 = TimMin_1(a, n);
	printf_s("\nMin la : %d", Min_1);

	int *Min_2 = TimMin_2(a, n);
	printf_s("\nMin la : %d", *Min_2);



	free(a);
	_getch();
	return 0;
}
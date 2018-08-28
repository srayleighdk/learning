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

// Viết hàm sắp xếp tăng dần bằng con trỏ....
void HoanVi(int *a, int *b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;
}
void SapXepMang(int *a, int n, char phanbiet)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (phanbiet == 't' || phanbiet == 'T')
			{
				if (a[i] > a[j])
				{
					HoanVi(&a[i], &a[j]);
				}
			}
			if (phanbiet == 'g' || phanbiet == 'G')
			{
				if (a[i] < a[j])
				{
					HoanVi(&a[i], &a[j]);
				}
			}
		}
	}
}
// Viết hàm thêm phần tử
void ThemPhanTu(int *&a, int &n, int vitrithem, int phantuthem)
{
	realloc(a, (n + 1) * sizeof(int));
	for (int i = n - 1; i >= vitrithem; i--)
	{
		a[i + 1] = a[i];
	}
	a[vitrithem] = phantuthem;
	n++;
}

// Viết hàm xóa phan tử
void XoaPhanTu(int *&a, int &n, int vitrixoa)
{
	for (int i = vitrixoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	realloc(a, (n--) * sizeof(int));
}
// Xóa nhiều phần tử
// thêm nhiều phần tử
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

	/*ThemPhanTu(a, n, 2, 69);
	printf_s("\n");
	XuatMang(a, n);*/
	SapXepMang(a, n, 't');
	printf_s("\n");
	XuatMang(a, n);
	SapXepMang(a, n, 'g');
	printf_s("\n");
	XuatMang(a, n);
	XoaPhanTu(a, n, 2);
	printf_s("\n");
	XuatMang(a, n);


	free(a);
	_getch();
	return 0;
}
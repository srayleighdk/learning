//Bài 155/61/SBT Thầy NTTMK:Hãy tìm giá trị trong mảng các số thực "xa giá trị x nhất". 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
int random(int a, int b)
{
	int x = a + rand() % (b - a + 1);
	return x;
}
double TimGiaTriXaNhat(int a[], int n, int x)
{
	int max = fabs(a[0] - x);
	int vitri = 0;
	for (int i = 1; i < n; i++)
	{
		if (fabs(a[i] - x) > max)
		{
			max = fabs(a[i] - x);
			vitri = i;
		}
	}
	return a[vitri];
}
void NhapMang(int a[], int &n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = random(-50, 50);
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		printf_s("%4d", a[i]);
	}
}
int main()
{
	int a[MAX];
	int n;
	do
	{
		printf_s("\nNhap so luong phan tu trong mang:");
		scanf_s("%d", &n);
		if (n < 0 || n > 100)
		{
			printf_s("\nSo luong phan tu khong hop le!");
		}
	} while (n < 0 || n > 100);
	
	NhapMang(a, n);
	XuatMang(a, n);
	TimGiaTriXaNhat(a, n, 8);
	_getch();
	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
int kiemtra(int x, int a)
{
	double ketqua = log10((double)x) / log10(a);
	return ketqua == (int)ketqua;
}

void NhapMang(int a[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

	}
}
int main()
{
	int a[MAX];
	int n;
	do
	{
		printf_s("Nhap so luong phan tu :");
		scanf_s("%d", &n);
		if (n < 0 || n > 100)
		{
			printf_s("So luong phan tu khong hop le!");
		}
	} while (n < 0 || n > 100);
	int x = 4, a = 2;
	int ketqua = kiemtra(x, 2);
	printf_s("%d", ketqua);
	_getch();
	return 0;

}
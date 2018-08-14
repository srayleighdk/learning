#include <stdio.h>
#include <conio.h>
// Viết hàm trả về giá trị nhỏ nhất của 4 số nguyên
int returnmin(int a, int b, int c, int d)
{
	int min = a;
	min = min <= b ? min : b;
	min = min <= c ? min : c;
	min = min <= d ? min : d;
	return min;
}
void Nhap(int &n)
{
	do {
		printf("\nNhap n:");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf_s("\nPhai la so nguyen. Xin kiem tra lai !");
		}
	} while (n < 0);
}
int main()
{
	int a, b, c, d;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	Nhap(d);
	int min = returnmin(a, b, c, d);
	printf_s("%d", min);
	_getch();
	return 0;
}
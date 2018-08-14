#include <stdio.h>
#include <conio.h>
// Viết thủ tục sắp xếp 4 số nguyên tăng dần
void hoanvi(int a, int b)
{
	if ( a > b)
	{ 
	int temp = a;
	a = b;
	b = temp;
	printf_s("Sau khi hoan doi %d %d", a, b);
	}
}
void Nhap(int &n)
{
	printf_s("Nhap :");
	scanf_s("%d", &n);
}
int main()
{
	int a, b, c, d;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	Nhap(d);
	hoanvi(a, b);
	hoanvi(b, c);
	hoanvi(c, d);
	printf_s("\nSap xep tang dan: %d %d %d %d", a, b, c, d);
	_getch();
	return 0;
}
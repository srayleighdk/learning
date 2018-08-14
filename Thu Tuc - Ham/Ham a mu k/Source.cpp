#include <stdio.h>
#include <conio.h>
#include <math.h>
int kiemtra(int x, int a)
{
	double ketqua = log10((double)x) / log10(a);
	return ketqua == (int)ketqua;
}
int main()
{
	int x = 4, a = 2;
	int ketqua = kiemtra(x, a);
	printf_s("%d", ketqua);
	_getch();
	return 0;

}
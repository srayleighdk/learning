#include <stdio.h>
#include <conio.h>
#include <math.h>
//Viết chương trình nhập giá trị x sau, tính giá trị của hàm số.
int main()
{
	int x; 
	printf_s("\nNhap x:");
	scanf_s("%d", &x);
	int f, z;
	if (x >= 5) {
		f = (2 * x*x) + 5 * x + 9;
		printf_s("\nf(%d) co gia tri: %d", x, f);
	}
	else {
		f = (-2 * x*x) + 4 * x - 9;
		printf_s("\nf(%d) co gia tri: %d", x, f);
	}
	_getch();
	return 0;
}
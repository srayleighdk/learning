#include <stdio.h>
#include <conio.h>
// Viết chương trình nhập 3 số thực.Thay số âm bằng trị tuyệt đối của nó.
int main()
{
	float a, b, c;
	printf_s("\nNhap a:");
	scanf_s("%f", &a);
	printf_s("\nNhap b:");
	scanf_s("%f", &b);
	printf_s("\Nhap c");
	scanf_s("%f", &c);
	if (a < 0) {
		a = a * -1;
	}
	if (b < 0) {
		b = b * -1;
	}
	if (c < 0) {
		c = c * -1;
	}
	printf_s("\n%f %f %f", a, b, c);
	_getch();
	return 0;
}
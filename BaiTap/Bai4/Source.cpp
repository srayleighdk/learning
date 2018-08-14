#include <stdio.h>
#include <conio.h>
//Tính tổng s = x + ( (x^2) / 1 + 2 ) + ... + ( (x^n) / 1 + 2 + 3 + ... + n )
int main() 
{
	int i, n;
	float x, t, s;
	long m;
	do {
		printf_s("\nNhap vao x:");
		scanf_s("%f", &x);
		if (x < 0) {
			printf_s("\nx khong hop le.Xin kiem tra lai!.");
		}
	} while (x < 0);
	do {
		printf_s("\nNhap so n:");
		scanf_s("%d", &n);
		if (n < 0) {
			printf_s("\nn khong hop le.Xin kiem tra lai!.");
		}
	} while (n < 0);

	s = 0;
	t = 1;
	m = 0;
	i = 1;
	for (i; i <= n; i++) {
		t *= x;
		m += i;
		s = s + (t / m);
	}

	printf_s("%f", s);










}
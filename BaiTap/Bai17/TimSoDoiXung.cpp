#include <stdio.h>
#include <conio.h>
#include <math.h>
// Nhập n, kiểm tra xem n có phải số đối xứng hay không
int main()
{
	int n;
	do {
		printf_s("\nNhap n:");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf_s("\nN phai lon hon 0. Xin kiem tra lai !");
		}
	} while (n <= 0);
	int temp = n;
	int sochuso = log10((double)n);
	int sodaonguoc = 0;
	while (temp != 0) {
		int chuso = temp % 10;
		temp /= 10;
		sodaonguoc += chuso * pow(10.0, sochuso--);
	}
	printf_s("\nSo dao nguoc:%d", sodaonguoc);
	if (n == sodaonguoc) {
		printf_s("\n%d la so doi xung", n);
	}
	else {
		printf_s("\n%d khong phai so doi xung", n);
	}
	_getch();
	return 0;
}
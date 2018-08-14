#include <stdio.h>
#include <conio.h>
// Tính tổng các số từ 1 tới n
int main()
{
	int n;
	do {
		printf_s("\nNhap vao so n:");
		scanf_s("%d", &n);
		if (n < 0) {
			printf_s("\nN phai lon hon 0.Xin kiem tra lai!");
		}
	} while (n < 0);
	int s = 0, i;
	for (i = 1; i <= n; i++) {
		s += i;
	}
	printf_s("\nTong cac so tu 1 toi %d la: %d", n, s);
}
#include <stdio.h>
#include <conio.h>
// Tính S = 1^3 + 2^3 + 3^3 + ... + N^3
int main()
{
	int i, s, n;
	do {
		printf_s("\nNhap vao n:");
		scanf_s("%d", &n);
		if (n < 0) {
			printf_s("\nn phai lon hon khong. Xin kiem tra lai!");
		}
	} while (n < 0);
	s = 0;
	for (i = 1; i <= n; i++) {
		s += i * i * i;
	}
	printf_s("\nTong la: %d", s);
	_getch();
	return 0;
}
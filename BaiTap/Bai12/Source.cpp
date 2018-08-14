#include <stdio.h>
#include <conio.h>
//Viết chương trình tính tổng các số lẻ nguyên dương nhỏ hơn n.
int main()
{
	int i, n, s;
	do {
		printf_s("\nNhap vao n:");
		scanf_s("%d", &n);
		if (n < 0) {
			printf_s("\nn phai lon hon 0. Xin kiem tra lai!");
		}
	} while (n < 0);
	s = 0;
	for (i = 1; i <= n; i += 2) {
		s += i;
	}
	printf_s("\nTong cac so le nguyen duong la: %d", s);
	_getch();
	return 0;
}
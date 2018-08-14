#include <stdio.h>
#include <conio.h>
//Hãy đếm số lượng chữ số của số nguyên dương n
int main()
{
	long n,t;
	do {
		printf_s("\nNhap vao so n:");
		scanf_s("%ld", &n);
		if (n < 0) {
			printf_s("\nSo khong hop le.Xin Kiem tra lai!");
		}
	} while (n < 0);
	int dem = 0;
	t = n;
	while (t != 0) {
		dem = dem + 1;
		t = t / 10;
		printf_s("%d %ld\n", dem, t);
	}
	printf_s("%d", dem);
}
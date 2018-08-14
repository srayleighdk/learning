#include <stdio.h>
#include <conio.h>
// Tìm số lớn nhất trong 3 số a,b,c
int main() {
	int a, b, c, max;
	printf_s("\nNhap vao a:");
	scanf_s("%d", &a);
	printf_s("\nNhap vao b:");
	scanf_s("%d", &b);
	printf_s("\nNhap vao c:");
	scanf_s("%d", &c);
	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	printf("\nSo lon nhat la: %d", max);
	scanf_s("%d", &a);
}

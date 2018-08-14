#include <stdio.h>
#include <conio.h>
// Nhập hai số a,b. Kiểm tra xem hai số có cùng dấu không
int main()
{
	int a, b;
	printf_s("\nNhap a:");
	scanf_s("%d", &a);
	printf_s("\nNhap b:");
	scanf_s("%d", &b);
	if (a*b > 0) {
		printf_s("\na va b cung dau");
	}
	else {
		printf_s("\na va b khac dau");
	}
	_getch();
	return 0;
}
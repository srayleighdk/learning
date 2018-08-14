#include <stdio.h>
#include <conio.h>
//In tất cả các số nguyên dương lẻ nhỏ hơn 100.
int main()
{
	int i = 1;
	while (i < 100) {
		printf_s("\nSo le:%d", i);
		i += 2;
	}
	_getch();
}
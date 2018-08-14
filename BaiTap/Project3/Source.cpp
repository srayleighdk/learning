#include <stdio.h>
#include <conio.h>
//Đoạn chương trình dưới đây sẽ cho số nguyên dương n nhỏ nhất sao cho 1 + 2 + 3 +...+ n < 10000
int main()
{
	int i, n, s;
	s = 0;
	i = 0;
	while (s < 10000) {
		s += i;
		i++;
	}
	printf_s("\nso nguyen duong n nho nhat la: %d", i);
	_getch();
	return 0;
}
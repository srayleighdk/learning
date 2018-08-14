#include <stdio.h>
#include <conio.h>
// Thủ tục hoán vị hai số nguyên
void hoanvi(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf_s("Sau khi hoan doi %d %d", a, b);
}
int main()
{
	int a = 5, b = 10;
	hoanvi(a, b);
	_getch();
	return 0;
}
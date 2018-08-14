#include <stdio.h>
#include <conio.h>
// Viết hàm đổi 1 ký tự hoa sang ký thường và ngược lại

char biendoi(char &n)
{
	if (n >= 32 && n <= 90)
	{
		n = n + 32;
		return n;
	}
	if (n >= 97 && n <= 122)
	{
		n = n - 32;
		return n;
	}

}

int main()
{
	char n;
	printf_s("\n Nhap ky tu:");
	scanf_s("%c", &n);
	char uppercase1 = biendoi(n);
	printf_s("\nSau khi bien doi : %c", uppercase1);

	_getch();
	return 0;
}
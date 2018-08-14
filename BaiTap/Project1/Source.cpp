#include <stdio.h>
#include <conio.h>
//Liệt kê tất cả ước số của số nguyên dương X
int main()
{
	int x;
	do {
		printf_s("\nNhap vao so X:");
		scanf_s("%d", &x);
		if (x < 0)
		{
			printf_s("\nSo x phai lon hon 0");
		}
	} while (x < 0);
	for (int i = 1; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			printf_s("\nCac uoc cua so nguyen x la %d:", i);
		}
	}
	_getch;
	return 0;
};

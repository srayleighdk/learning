#include <stdio.h>
#include <conio.h>
//Tìm UCLN của hai số a và b.
int main()
{
	int a, b, max, min,i;
	do {
		printf_s("\nNhap a:");
		scanf_s("%d", &a);
		if (a < 0) {
			printf_s("\na phai lon hon 0");
		}
	} while (a < 0);
	do {
		printf_s("\nNhap b:");
		scanf_s("%d", &b);
		if (b < 0) {
			printf_s("\nb phai lon hon 0");
		}
	} while (b < 0);
	max = a > b ? a : b;
	min = a > b ? b : a;
	printf_s("\nMax la:%d", max);
	printf_s("\nMin la:%d", min);

	if (max % min == 0) {
		printf("\nUCLN cua a va b :%d", min);
	}
	else {
		for ( i = min/2; i >= 1; ) {
			if (min%i == 0 && max % i == 0) {
				printf_s("\nUCLN cua a va b la:%d", i);
				break;
			}
			i--;
		}
	}
	_getch();
	return 0;
}
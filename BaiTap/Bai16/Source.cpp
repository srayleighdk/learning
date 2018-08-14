#include <stdio.h>
#include <conio.h>
#include <math.h>
// tính n có bao nhiêu chữ số, min, max chữ số đó.
int main()
{
	int n;
	do {
		printf("\nNhap so nguyen duong n:");
		scanf_s("%d", &n);
		if (n < 0) {
			printf_s("\nn khong hop le.Xin kiem tra lai.");
		}
	} while (n < 0);
	int dem = 0;
	if (n == 0) {
		dem = 1;
	}
	else {
		dem = log10((double)n) + 1;
	}
	printf_s("\n%d co so chu so la: %d", n, dem);
	/*Vd: 4567 co 4 chữ số
	4567 % 10 = 7 
	4567 / 10 = 456
	*/
	int min, max;
	min = max = n % 10;
	int temp;
	temp = n;
	temp /= 10;
	while (temp != 0) {
		int chuso = temp % 10;
		temp /= 10;
		if (chuso > max) {
			max = chuso;
		}
		if (chuso < min) {
			min = chuso;
		}
	}
	printf_s("\nChu so Max: %d", max);
	printf_s("\nChu so Min: %d", min);
	_getch();
	return 0;
}
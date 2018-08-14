#include <stdio.h>
#include <conio.h>
// Kiểm tra n có phải số nguyên tố hay không
int main()
{
	int n;
	do {
		printf_s("\nNhap n:");
		scanf_s("%d", &n);
		if (n < 1) {
			printf_s("\nn phai > 1. Xin kiem tra lai !");
		}
		}while (n < 1);
	int i;
	bool check = true;
	for (i = 2; i < n ; i++) {
		if (n % i == 0) {
			check = false;  
			break;
		}

	}
	if (check) {
	printf_s("\n%d la so nguyen to", n);
	}
	else {
	printf_s("\nn khong phai la so nguyen to");
	}
	_getch();
	return 0;
}
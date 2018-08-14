#include <stdio.h>
#include <conio.h>
#include <math.h>
// Kiểm tra n có phải số chính phương không.
int main()
{
	int n;
	do {
		printf_s("\nNhap n:");
		scanf_s("%d", &n);
		if (n <=0){
			printf_s("\nn khong hop le. Xin kiem tra lai !");
		}
	} while (n <= 0);
	if (sqrt((double)n) == (int)sqrt((double)n)){
		printf_s("\n%d la so chinh phuong", n);
	}
	else {
		printf_s("\n%d khong phai la so chinh phuong", n);
	}
	_getch();
	return 0;
}
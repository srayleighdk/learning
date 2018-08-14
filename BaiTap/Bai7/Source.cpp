#include <stdio.h>
#include <conio.h>
//Viết chương trình giải và biện luận phương trình bậc nhất: ax + b = 0
int main()
{
	float a, b, x;
	printf_s("\nNhap a:");
	scanf_s("%f", &a);
	printf_s("\nNhap b:");
	scanf_s("%f", &b);
	if (a == 0) {
		if (b == 0) {
			printf_s("\nPhuong trinh co vo so nghiem!");
		}
		else {
			printf_s("\nPhuong trinh vo nghiem");
		}
	}
	else {
		printf_s("\nPhuong trinh co nghiem duy nhat: x = %f", x = -b / a);
	}
	_getch();
	return 0;
}
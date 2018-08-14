// Tính S = a! + b! + c!
#include <stdio.h>
#include <conio.h>

void Nhap(int &n)
{
	do {
		printf_s("\nNhap vao so nguyen duong:");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf_s("\nPhai la so nguyen duong. Xin Kiem tra lai !");
		}
	} while (n <= 0);
}
int TinhTich(int n) {
	int Tich = 1;
	for (int i = 2; i <= n; i++) {
		Tich *= i;
	}
	return Tich;
}

int main()
{
	int a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	int S = TinhTich(a) + TinhTich(b) + TinhTich(c);
	printf_s("\nS = a! + b! +c!= %d! + %d! + %d! = %d", a, b, c, S);
	_getch();
	return 0;
}
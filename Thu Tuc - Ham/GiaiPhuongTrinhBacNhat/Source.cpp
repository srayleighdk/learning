#include <stdio.h>
#include <conio.h>
#include <math.h>
// Viết hàm giải phương trình bậc nhất
void giaiphuongtrinhbacnhat(float a, float b)
{
	if (a == 0)
	{
		if (b == 0)
		{
			printf_s("\nPhuong trinh vo so nghiem.");
		}
		else
		{
			printf_s("\nPhuong trinh vo nghiem.");
		}
	}
	else
	{
		float x = -b/a;
		printf_s("\nPhuong trinh co nghiem duy nhat x = %f", x);
	}
}
void giaiphuongtrinhbac2(float a, float b, float c)
{
	float delta = b * b - (4 * a *c);
	if (delta < 0)
	{
		printf_s("\nPhuong trinh vo nghiem.");
	}
	else if (delta == 0)
	{
		printf_s("\nPhuong trinh co nghiem kep x1 = x2 = %f", -b / a);
	}
	else
	{
		printf_s("\n Phuong trinh co 2 nghiem x1 = %f, x2 = %f", (-b + sqrt((double)delta)) / (2 * a), (-b - sqrt((double)delta)) / (2 * a));
	}
}
int main()
{
	int z;
	printf_s("\n--------------- Menu ---------------");
	printf_s("\n1.Giai Phuong Trinh Bac Nhat");
	printf_s("\n2.Gia Phuong Trinh Bac Hai");
SilversRayleigh:	printf_s("\nMoi ban nhap lua chon: ");
	scanf_s("%d", &z);
	if (z == 1)
	{
	float a, b;
	printf_s("\nNhap a:");
	scanf_s("%f", &a);
	printf_s("\nNhap b:");
	scanf_s("%f", &b);
	giaiphuongtrinhbacnhat(a, b);

	}
	else if ( z == 2)
	{
		float a, b, c;
		printf_s("\nNhap a:");
		scanf_s("%f", &a);
		printf_s("\nNhap b:");
		scanf_s("%f", &b);
		printf_s("\nNhap c:");
		scanf_s("%f", &c);
		giaiphuongtrinhbac2(a, b, c);

	}
	else
	{
		goto SilversRayleigh;
	}
	_getch();
	return 0;
}
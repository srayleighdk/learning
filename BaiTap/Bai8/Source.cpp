#include <stdio.h>
#include <conio.h>
//Nhập vào tháng trong năm. Cho biết tháng thuộc quý mấy trong năm
int main()
{
	int thang;
	do {
		printf_s("\nNhap vao thang:");
		scanf_s("%d", &thang);
		if (thang < 1 || thang > 12) {
			printf_s("\nThang khong hop le!");
		}
	} while (thang < 1 || thang > 12);
	switch (thang)
	{
	case 1:
	case 2:
	case 3:
		printf_s("\nQuy I");
		break;
	case 4:
	case 5:
	case 6:
		printf_s("\nQuy II");
		break;
	case 7:
	case 8:
	case 9:
		printf_s("\nQuy III");
		break;
	case 10:
	case 11:
	case 12:
		printf_s("\nQuy IV");
		break;
	default:
		break;
	}
	_getch();
	return 0;
}
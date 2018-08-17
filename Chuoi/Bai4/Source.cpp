//Bài 4: Viết hàm nhận vào một chuỗi s và đếm xem có bao nhiêu từ trong chuỗi đó.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int DemTu(char *s)
{
	int n = strlen(s);
	int dem = 0;
	if (s[0] != ' ')
	{
		dem = 1;
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	char s[100] = "      Silvers      Rayleigh    Dark      King      ";
	int soluong = DemTu(s);
	printf_s("\nSo tu : %d", soluong);
	_getch();
	return 0;
}
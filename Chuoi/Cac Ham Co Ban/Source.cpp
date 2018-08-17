#include <stdio.h>
#include <conio.h>
// Bài 2: Viết hàm nhận vào một chuỗi và trả về chuỗi tương ứng (giữ nguyên chuỗi đầu vào):
// Các ký tự thành ký tự thường (giống strlwr).
// Các ký tự thành ký tự hoa (giống strupr). 
// Các ký tự đầu tiên mỗi từ thành ký tự hoa.
// Chuẩn hóa chuỗi (xóa khoảng trắng thừa).
int STRLEN(char *s)
{
	int dem = 0;
	while (s[dem++] != '\0') {};
	return dem;
}
char * STRCPY(char *s1, char *s2)
{
	int lenghts1 = STRLEN(s1);
	for (int i = 0; i < lenghts1; i++)
	{
		s2[i] = s1[i];
	}
	s2[lenghts1] = '\0';
	return s2;
}
//Các Ký tự đầu hoa thành các ký tự thường
char* biendoikytudauthuong(char *s)
{
	int lenght = STRLEN(s);
	if (s[0] != ' ')
	{
		if (s[0] >= 'A' && s[0] <= 'Z')
		{
			s[0] += 32;
		}
	}
	for (int i = 0; i < lenght - 1; i++)
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			if (s[i + 1] >= 'A' && s[i + 1] <= 'Z')
			{
				s[i + 1] += 32;
			}
		}
	return s;
}
// Các ký tự đầu thường thành hoa
char* biendoikytudauhoa(char* s)
{
	int lenght = STRLEN(s);
	if (s[0] != ' ')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
	}
	for (int i = 0; i < lenght - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	return s;
}
//Biến đổi tất cả ký tự thành thường giống strlwr
char* STRLWR(char* s)
{
	int lenght = STRLEN(s);
	for (int i = 0; i < lenght; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	return s;
}
//Biến đổi tất cả ký tự thường thành hoa giống strupr
char* STRUPR(char* s)
{
	int lenght = STRLEN(s);
	for (int i = 0; i < lenght; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return s;
}
//Xóa ký tự
void Xoa(char* s, int vitrixoa)
{
	int lenght = STRLEN(s);
	for (int i = vitrixoa; i < lenght; i++)
	{
		s[i] = s[i + 1];
	}
	s[lenght - 1] = '\0';
}
//Chuẩn hoa chuỗi, xóa tất cả khoảng trắng thừa
char* ChuanHoaChuoi(char* s)
{
	int lenght = STRLEN(s);
	for (int i = 0; i < lenght; i++)
	{
		if ( s[i] == ' ' && s[i + 1] == ' ')
		{
			Xoa(s, i+1);
			i--;
			s[lenght - 1] = '\0';
		}
	}
	if (s[0] == ' ')
	{
		Xoa(s, 0);
		s[lenght - 1] = '\0';
	}
	if (s[lenght - 1] == ' ')
	{
		Xoa(s, lenght - 1);
		s[lenght - 1] == '\0';
	}
	return s;
}

int main()
{
	char s[100] = "      Silvers     Rayleigh       Dark        King       ";
	/*int lenght = STRLEN(s);
	printf_s("Do dai chuoi la: %d", lenght);
	char p[30];
	STRCPY(s, p);
	printf_s("\np la: %s", p);
	biendoikytudauthuong(s);
	printf_s("\nChuoi sau khi bien doi ky tu dau hoa thanh thuong : %s", s);
	biendoikytudauhoa(s);
	printf_s("\nChuoi sau khi bien doi ky tu dau thuong thanh hoa: %s", s);
	STRLWR(s);
	printf_s("\nChuoi sau khi bien doi tat ca ky tu hoa thanh thuong: %s", s);
	STRUPR(s);
	printf_s("\nChuoi sau khi bien doi tat ca ky tu thuong thanh hoa: %s", s);*/
	ChuanHoaChuoi(s);
	printf_s("\n Chuoi sau khi chuan hoa la: %s", s);
	/*int dodai = STRLEN(s);
	printf_s("\nDo dai chuoi: %d", dodai);*/


	_getch();
	return 0;
}
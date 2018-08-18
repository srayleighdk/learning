//Viết hàm nhận vào chuỗi s và xuất các từ trên các dòng liên tiếp
#include <stdio.h>
#include <conio.h>
#include <string.h>
//Hàm Cắt chuỗi
char* CatChuoi(char *s, int start, int end)
{
	char* p = new char[end - start + 1];
	
	int index = 0;
	int lenght = strlen(s);
	for (int i = start; i <= end; i++)
	{
		p[index++] = s[i];
	}
	p[index] = '\0';
	return p;
}
char* STRCPY(char* p, char* s)
{
	int lenghts = strlen(s);
	for (int i = 0; i < lenghts; i++)
	{
		p[i] = s[i];
	}
	p[lenghts] = '\0';
	return p;
}
void XuatCacTu(char *s)
{
	int start, end;
	int lenght = strlen(s);
	for (int i = 0; i < lenght; i++)
	{
		if (s[i] != ' ')
		{
			start = i;
			for (int j = start + 1; j <= lenght; j++)
			{
				if (s[j] == ' ' || s[j] == '\0')
				{
					end = j-1;
					char p[100];
					STRCPY(p, CatChuoi(s, start, end));
					printf_s("\n%s", p);
					i = j;
					break;
				}
			}
		}
	}
}

int main()
{
	char s[] = "Silvers Rayleigh Dark King";
	//STRCPY(p, CatChuoi(s, 0, 3));
	//printf_s("%s", p);
	XuatCacTu(s);
	_getch();
	return 0;

}
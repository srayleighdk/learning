//Bài 6: Viết hàm tìm từ có chiều dài lớn nhất và xuất ra màn hình từ đó và độ dài tương ứng.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void TuDaiNhat(char *s)
{
	int start, end;
	int lenght = strlen(s);
	int maxstart, maxend;
	int max = 1;
	for (int i = 0; i < lenght; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			start = i + 1;
			for (int j = start + 1; j <= lenght; j++)
			{
				if (s[j] == ' ' || s[j] == '\0')
				{
					end = j - 1;
					i = end;
					break;
				}
			}
			int dodai = end - start + 1;
			if (dodai > max)
			{
				max = dodai;
				maxstart = start;
				maxend = end;
			}
		}
	}
	printf_s("\nKet qua la: ");
	for (int i = maxstart; i <= maxend; i++)
	{
		printf_s("%c", s[i]);
	}
	printf_s("\nDo dai la: %d", max);
}
int main()
{
	char s[] = "Silvers Rayleigh Dark King";
	TuDaiNhat(s);
	_getch();
	return 0;
}
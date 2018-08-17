#include <stdio.h>
#include <conio.h>
#include <string.h>
//Hàm cắt chuỗi
void Catchuoi(char* s, char* p, int start, int end)
{
	int lenght = strlen(s);
	char p[20];
	int index = 0;
	for (int i = start; i < lenght; i++)
	{
		p[index++] = i;
	}
	p[index] = '\0';
	printf_s("%s", p);
}


int main()
{

	_getch();
	return 0;

}
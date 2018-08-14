#include <stdio.h>
#include <conio.h>
int main()
{
	int x = 10, y = x++;
	printf_s("x =  %d va  y= %d", x, y);
	_getch();
	return 0;
}
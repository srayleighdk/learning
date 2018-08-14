#include <stdio.h>
#include <conio.h>
//Xuất các ký tự từ a --> z.
int main()
{
	char kytu;
	for (kytu = 'a'; kytu <= 'z'; kytu++) {
		printf_s("\nKy tu: %c", kytu);
	}
	_getch();
	return 0;
}
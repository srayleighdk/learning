#include <stdio.h>
#include <conio.h>
// Viết chương trình in ra các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
int main()
{
	int i;
	for (i = 1; i <= 100; i += 2) {
		if ((i == 5) || (i == 7) || (i == 93)) {
			continue;
		}
		printf("\n%d", i);
	}
	_getch();
	return 0;
}
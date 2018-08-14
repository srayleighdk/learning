#include <stdio.h>
#include <conio.h>
int main()
{
	int n, i;
	long S;
	scanf_s("%d", &n);
	S = 0;
	i = 1;
	while (i <= n)
	{
		S += i++;
	}
	printf("%ld", S);
	_getch;
	return 0;
}
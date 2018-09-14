#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void NhapMang(int **a, int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("\nNhap vao a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
			//Cách 2: scanf_s("%d", a[i] + j);
			//Cách 3: scanf_s("%d", *(a + i) + j)
		}
	}
}

void XuatMang(int **a, int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("%4d", a[i][j]);
			//Cách 2: printf_s("%4d", *a[i] + j);
			//Cách 3: printf_s("%4d", *(*(a + i) + j));
		}
		printf_s("\n");
	}
}

int main()
{
	int dong = 2, cot = 3;
	int **a;
	a = (int **)malloc(dong * sizeof(int));
	for (int i = 0; i < dong; i++)
	{
		a[i] = (int *)malloc(cot * sizeof(int));
	}

	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	//Giải Phóng
	for (int i = 0; i < dong; i++)
	{
		free(a[i]);
	}
	free(a);
	_getch();
	return 0;
}
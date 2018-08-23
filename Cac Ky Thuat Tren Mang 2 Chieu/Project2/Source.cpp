#include <stdio.h>
#include <conio.h>
#define MAX 100
void NhapMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("\nNhap a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("%4d", a[i][j]);
		}
		printf_s("\n");
	}
}
int TongBien(int a[][MAX], int dong, int cot)
{
	int Tong = 0;
	for (int i = 0; i < cot; i++)
	{
		Tong += a[0][i] + a[dong - 1][i];
	}
	for (int j = 1; j < dong - 1; j++)
	{
		Tong += a[j][0] + a[j][cot - 1];
	}
	return Tong;
}
//Đếm số dương trên mỗi dòng
void SoDuongTrenMoiDong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		int dem = 0;
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] > 0)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
		printf_s("\ndong %d co so luong so duong la: %d", i, dem);
		}
		else
		{
			printf_s("\nKhong co so duong nao");
		}
	}
}
//Bai Tap: Tim phan tu Yen Ngua trong mang 2 chieu
int KiemTraYenNgua(int a[][MAX], int dong, int cot, int chisodong, int chisocot)
{
	for (int i = 0; i < cot; i++)
	{
		if (a[chisodong][i] > a[chisodong][chisocot])
		{
			return 0;
		}
	}
	for (int j = 0; j < dong; j++)
	{
		if (a[j][chisocot] < a[chisodong][chisocot])
		{
			return 0;
		}
	}
	return 1;
}
void LKYenNgua(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac phan tu yen ngua la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (KiemTraYenNgua(a, dong, cot, i, j) == 1)
			{
				printf_s("\n%4d", a[i][j]);
				printf_s("\nVi tri yen ngua a[%d][%d]", i, j);
			}
		}
	}
}
//Bai tap kiem tra dong tang dan va cot tang dan
int KiemTraDongTangDan(int a[][MAX], int cot, int chisodong)
{
	for (int i = 0; i < cot; i++)
	{
		if (a[chisodong][i] < a[chisodong][i - 1])
		{
			return 0;
		}
	}
	return 1;
}
void KiemTraTungDong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		if (KiemTraDongTangDan(a, cot, i) == 1)
		{
			printf_s("\nDOng %d tang dan", i);
		}
		else if( KiemTraDongTangDan(a, cot, i) == 0)
		{
			printf_s("\nDong %d khong tang dan", i);
		}
	}
}
int KiemTraCotTangDan(int a[][MAX], int dong, int chisocot)
{
	for (int i = 1; i < dong; i++)
	{
		if (a[i][chisocot] < a[i - 1][chisocot])
		{
			return 0;
		}
	}
	return 1;
}
void KiemTraTungCot(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < cot; i++)
	{
		if (KiemTraCotTangDan(a, dong, i) == 1)
		{
			printf_s("\nCot %d tang dan", i);
		}
		else
		{
			printf_s("\nCot %d khong tang dan", i);
		}
	}
}
//Bai Tap Hoan Vi 2 dong
void HoanVi(int &a, int &b)
{
	int Temp = a; 
	a = b;
	b = Temp;
}
void HoanVi2Dong(int a[][MAX], int cot, int dong1, int dong2)
{
	for (int i = 0; i < cot; i++)
	{
		HoanVi(a[dong1][i], a[dong2][i]);
	}
}
//Bai Tap Hoan Vi Cot
void HoanVi2Cot(int a[][MAX], int dong, int cot1, int cot2)
{
	for (int i = 0; i < dong; i++)
	{
		HoanVi(a[i][cot1], a[i][cot2]);
	}
}
//Bai Tap Xoa Dong
void XoaDong(int a[][MAX], int &dong,int cot, int vitridong)
{
	for (int i = vitridong; i < dong; i++)
	{
		HoanVi2Dong(a, cot, i, (i + 1));
	}
	dong--;
}
//Bai Tap Xoa Cot
void XoaCot(int a[][MAX], int dong, int &cot, int vitricot)
{
	for (int i = vitricot; i < cot; i++)
	{
		HoanVi2Cot(a, dong, i, (i + 1));
	}
	cot--;
}
//Them dong vao vi tri
void ThemDongVaoViTri(int a[][MAX], int &dong, int cot, int b[], int vitridongthem)
{
	dong++;
	for (int i = 0; i < cot; i++)
	{
		a[dong - 1][i] = b[i];
	}
	for (int j = dong - 1; j > vitridongthem; j--)
	{
		HoanVi2Dong(a, cot, j, j - 1);
	}
}
//Them cot vao vi tri
void ThemCotVaoViTri(int a[][MAX], int dong, int &cot, int c[], int vitricotthem)
{
	cot++;
	for (int i = 0; i < dong; i++)
	{
		a[i][cot - 1] = c[i];
	}
	for (int j = cot - 1; j > vitricotthem; j--)
	{
		HoanVi2Cot(a, dong, j, j - 1);
	}
}
int main()
{
	int a[MAX][MAX], dong, cot;
	do
	{
		printf("\nNhap vap dong:");
		scanf_s("%d", &dong);
		if (dong < 1 || dong > 100)
		{
			printf_s("\nDong khong hop le!");
		}
	} while (dong < 1 || dong > 100);
	do
	{
		printf("\nNhap vap cot:");
		scanf_s("%d", &cot);
		if (cot < 1 || cot > 100)
		{
			printf_s("\nCot khong hop le!");
		}
	} while (cot < 1 || cot > 100);
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	/*int Tong = TongBien(a, dong, cot);
	printf_s("\nTong bien la: %d", Tong);
	LKYenNgua(a, dong, cot);
	KiemTraTungDong(a, cot, dong);
	KiemTraTungCot(a, dong, cot);
	HoanVi2Dong(a, cot, 0, 2);
	printf_s("\nDong sau khi bien doi la!\n");
	XuatMang(a, dong, cot);
	HoanVi2Cot(a, dong, 0, 2);
	printf_s("\nCot sau khi bien doi la!\n");
	XuatMang(a, dong, cot);
	XoaDong(a, dong, cot, 0);
	printf_s("\nMa tran sau khi xoa dong\n");
	XuatMang(a, dong, cot);
	XoaCot(a, dong, cot, 0);
	printf_s("\nMa tran sau khi xoa cot\n");
	XuatMang(a, dong, cot);*/
	int b[MAX];
	for (int i = 0; i < cot; i++)
	{
		printf_s("\nNhap vap phan tu: ");
		scanf_s("%4d", &b[i]);
	}
	ThemDongVaoViTri(a, dong, cot, b, 2);
	XuatMang(a, dong, cot);
	int c[MAX];
	for (int i = 0; i < dong; i++)
	{
		printf_s("\nNhap vap phan tu: ");
		scanf_s("%4d", &c[i]);
	}
	ThemCotVaoViTri(a, dong, cot, c, 2);
	XuatMang(a, dong, cot);
	_getch();
	return 0;
}
#include <stdio.h>
#include <conio.h>
#define MAX 100
#include <math.h>
#include <limits.h>
void NhapMang(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf_s("\nNhap vao a[%d][%d]", i, j);
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
//Liệt kê các số chẵn có trong mảng
void LKChan(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac so chan trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf_s("%d    ", a[i][j]);
			}
		}
	}
}
//Liệt kê cac số nguyên số trong mảng
int KTNguyenTo(int x)
{
	if (x < 2)
	{
		return 0;
	}
	if (x > 2)
	{
		if (x % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= (int)sqrt(x); i += 2)
		{
			if (x % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
void LKNguyenTo(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac so nguyen to co trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (KTNguyenTo(a[i][j]) == 1)
			{
				printf_s("%d   ", a[i][j]);
			}
		}
	}
}
//Liệt kê các số hoàn thiện có trong mảng..( số hoàn thiện là số mà tổng ước chung của nó bằng chính nó.
int KTHoanThien(int x)
{
	int Tong = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			Tong += i;
		}
	}
	if (Tong == x)
	{
		return 1;
	}
	return 0;
}
void LKHoanThien(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac so hoan thien co trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (KTHoanThien(a[i][j]) == 1)
			{
				printf_s("%4d   ", a[i][j]);
			}
		}
	}
}
//4/ Tìm số chẵn đầu tiên/cuối cùng trong mảng
void LKChanDauCuoi(int a[][MAX], int dong, int cot)
{
	printf_s("\nSo chan dau tien xuat hien trong mang la: ");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf_s("%d", a[i][j]);
				break;
			}
		}
		break;
	}
	printf_s("\nSo chan cuoi cung xuat hien trong mang la: ");
	for (int i = dong - 1; i >= 0; i--)
	{
		for (int j = cot - 1; j >= 0; j--)
		{
			if (a[i][j] % 2 == 0)
			{
				printf_s("%d", a[i][j]);
				break;
			}
		}
		break;
	}
}
//5/ Tính trung bình cộng các số dương có trong mảng.
float TrungBinhCongDuong(int a[][MAX], int dong, int cot)
{
	int Tong = 0;
	int dem = 0;
	float TBC;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] > 0)
			{
				dem++;
				Tong += a[i][j];
			}
		}
	}
	TBC = (float)Tong / dem;
	return TBC;
}
//6/ Tính trung bình tích các số lẻ có trong mảng.
float TrungBinhTichLe(int a[][MAX], int dong, int cot)
{
	int Tich = 1;
	int dem = 0;
	float TrungBinhTich;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				dem++;
				Tich *= a[i][j];
			}
		}
	}
	TrungBinhTich = pow(Tich, (float)1 / dem);
	return TrungBinhTich;
}
//7/ Tính tổng từng dòng trong mảng.
int TinhTongDong(int a[][MAX], int dong, int cot, int chisodong)
{
	int Tong = 0;
	for (int i = 0; i < cot; i++)
	{
		Tong += a[chisodong][i];
	}
	return Tong;
}
void TinhTongTungDongTrongMang(int a[][MAX], int dong, int cot)
{

	for (int i = 0; i < dong; i++)
	{
		int Tong = 0;
		Tong = TinhTongDong(a, dong, cot, i);
		printf_s("\nTong dong %d la: %d", i, Tong);
	}
}
//Cách 2
void TongTungDong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		int Tong = 0;
		for (int j = 0; j < cot; j++)
		{
			Tong += a[i][j];
		}
		printf_s("\nTong dong %d la: %d", i, Tong);
	}
}
//8/ Tính tổng từng cột trong mảng.
void TongTungCot(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < cot; i++)
	{
		int Tong = 0;
		for (int j = 0; j < dong; j++)
		{
			Tong += a[j][i];
		}
		printf_s("\nTong cot %d la: %d", i, Tong);
	}
}

//9/ Thêm 1 dòng mới vào vị trí vào mảng.
void HoanVi(int &a, int &b)
{
	int Temp = a;
	a = b;
	b = Temp;
}
void HoanViHaiDOng(int a[][MAX], int dong, int cot, int dong1, int dong2)
{
	for (int i = 0; i < cot; i++)
	{
		HoanVi(a[dong1][i], a[dong2][i]);
	}
}
void ThemDongVaoMang(int a[][MAX], int b[], int &dong, int cot, int vitridongthem)
{
	dong++;
	for (int i = 0; i < cot; i++)
	{
		a[dong - 1][i] = b[i];
	}
	for (int i = dong - 1; i > vitridongthem; i--)
	{
		HoanViHaiDOng(a, dong, cot, i, i - 1);
	}
}
//10/ Xóa 1 dòng trong mảng
void XoaDOngTrenMang(int a[][MAX], int &dong, int cot, int vitridongxoa)
{
	for (int i = vitridongxoa; i < dong; i++)
	{
		HoanViHaiDOng(a, dong, cot, i, i + 1);
	}
	dong--;
}

//11/ Thêm 1 cột mới vào mảng.

void HoanViHaiCot(int a[][MAX], int dong, int cot1, int cot2)
{
	for (int i = 0; i < dong; i++)
	{
		HoanVi(a[i][cot1], a[i][cot2]);
	}
}
void ThemCotVaoMang(int a[][MAX], int c[], int dong, int &cot, int vitricotthem)
{
	cot++;
	for (int i = 0; i < dong; i++)
	{
		a[i][cot - 1] = c[i];
	}
	for (int i = cot - 1; i > vitricotthem; i--)
	{
		HoanViHaiCot(a, dong, i, i - 1);
	}
}
//12 / Xóa 1 cột trong mảng.
void XoaCotTrenMang(int a[][MAX], int dong, int &cot, int vitricotxoa)
{
	for (int i = vitricotxoa; i < cot; i++)
	{
		HoanViHaiCot(a, dong, i, i + 1);
	}
	cot--;
}

//15/ Sắp xếp mảng tăng dần theo từng dòng
void SapXepTangDanTrenDong(int a[][MAX], int chisodong, int cot)
{
	for (int i = 0; i < cot; i++)
	{
		if (a[chisodong][i] > a[chisodong][i + 1])
		{
			HoanVi(a[chisodong][i], a[chisodong][i + 1]);
		}
	}
}
void SapXepTangDanTrenTungDong(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		SapXepTangDanTrenDong(a, i, cot);
	}
}

//Dếm giá trị cực trị có trong mảng
void DemSoLuongCucTri(int a[][MAX], int dong, int cot)
{
	printf_s("\nCac gia tri cuc tri la: ");
	int dem = 0;
	int Min = INT_MAX;
	int Max = INT_MIN;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if ( (i + 1) < (dong - 1))
			{
				Max = a[i + 1][j] > Max ? a[i + 1][j] : Max;
				Min = a[i + 1][j] < Min ? a[i + 1][j] : Min;
			}
			if (i - 1 >= 0)
			{
				Max = a[i - 1][j] > Max ? a[i - 1][j] : Max;
				Min = a[i - 1][j] < Min ? a[i - 1][j] : Min;
			}
			if (j + 1 < cot - 1)
			{
				Max = a[i][j + 1] > Max ? a[i][j + 1] : Max;
				Min = a[i][j + 1] < Min ? a[i][j + 1] : Min;
			}
			if (j - 1 >= 0)
			{
				Max = a[i][j - 1] > Max ? a[i][j - 1] : Max;
				Min = a[i][j - 1] < Min ? a[i][j - 1] : Min;
			}
			if (a[i][j] > Max || a[i][j] < Min)
			{
				printf_s("%4d", a[i][j]);
				dem++;
			}
		}
	}
	printf_s("\nMang co so luong cuc tri la: %d", dem);
}

//Đếm số lượng các giá trị có trong màng hai chiều, lưu ý nếu có k phần tử bằng nhau thì ta chỉ tính một..
int DemGiaTriPhanBiet(int a[][MAX], int dong, int cot)
{
	int dem = 1;
	for (int i = 1; i < dong * cot; i++)
	{
		bool check = true;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i / cot][i % cot] == a[j / cot][j % cot])
			{
				check = false;
				break;
			}
		}
		if (check == true)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	int a[MAX][MAX], dong, cot;
	do
	{
		printf("\nNhap vao dong: ");
		scanf_s("%d", &dong);
		if (dong < 1 || dong > 100)
		{
			printf_s("\nSo dong khong hop le.Xin kiem tra lai!");
		}
	} while (dong < 1 || dong > 100);
	do
	{
		printf("\nNhap vao so cot: ");
		scanf_s("%d", &cot);
		if (cot < 1 || cot > 100)
		{
			printf_s("\nSo cot khong hop le.Xin kiem tra lai!");
		}
	} while (cot < 1 || cot > MAX);
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	/*LKChan(a, dong, cot);
	LKNguyenTo(a, dong, cot);
	LKHoanThien(a, dong, cot);
	LKChanDauCuoi(a, dong, cot);
	float TBCDuong = (TrungBinhCongDuong(a, dong, cot));
	printf_s("\nTrung binh cong so duong co trong mang la: %f", TBCDuong);
	float TBTLe = TrungBinhTichLe(a, dong, cot);
	printf_s("\nTrung binh tich cac so le co trong mang la: %f", TBTLe);
	TinhTongTungDongTrongMang(a, dong, cot);
	TongTungDong(a, dong, cot);
	TongTungCot(a, dong, cot);

	int b[MAX];
	for (int i = 0; i < cot; i++)
	{
		printf_s("\nNhap phan tu vao mang: ");
		scanf_s("%d", &b[i]);
	}
	ThemDongVaoMang(a, b, dong, cot, 0);
	printf("\nMang sau khi them dong vao vi tri 0 la :\n ");
	XuatMang(a, dong, cot);
	XoaDOngTrenMang(a, dong, cot, 3);
	printf_s("\nMang sau khi xoa dong o vi tri thu 3 la :\n");
	XuatMang(a, dong, cot);
	int c[MAX];
	for (int j = 0; j < dong; j++)
	{
		printf_s("\nNhap phan tu vao cot them: ");
		scanf_s("%d", &c[j]);
	}
	ThemCotVaoMang(a, c, dong, cot, 0);
	printf_s("\nMang sau khi them cot vao vi tri 0 la :\n");
	XuatMang(a, dong, cot);
	XoaCotTrenMang(a, dong, cot, 2);
	printf_s("\nMang sau khi xoa cot o vi tri 2 la: \n");
	XuatMang(a, dong, cot);*/
	//SapXepTangDanTrenTungDong(a, dong, cot);
	//XuatMang(a, dong, cot);
	DemSoLuongCucTri(a, dong, cot);
	int demphanbiet = DemGiaTriPhanBiet(a, dong, cot);
	printf_s("\nSo luong cac phan tu phan biet la: %d", demphanbiet);
	_getch();
	return 0;
}
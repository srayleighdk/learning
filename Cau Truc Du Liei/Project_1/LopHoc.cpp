#include "LopHoc.h"



void NhapLopHoc(LOPHOC &lh)
{
	do
	{
		printf_s("\nNhap so luong sinh vien: ");
		scanf_s("%d", &lh.n);
		if (lh.n < 0)
		{
			printf_s("\nSo luong sinh vien khong hop le. Xin kiem tra lai!");
		}
	} while (lh.n < 0);

	lh.arr = new SINHVIEN[lh.n];

	for (int i = 0; i < lh.n; i++)
	{
		printf_s("\nNhap sinh vien thu %d", i + 1);
		int Check;
		do {
			Check = 0;

			rewind(stdin);
			printf_s("\nNhap ma so sinh vien: ");
			gets_s(lh.arr[i].MaSo);
			for (int j = i - 1; j >= 0; j--)
			{
				if (strcmp(lh.arr[i].MaSo, lh.arr[j].MaSo) == 0)
				{
					Check = 1;
				}
			}
			if (Check == 1)
			{
				printf_s("\nMa so bi trung. Xin kiem tra lai!");
			}
		} while (Check == 1);
		NhapSinhVien(lh.arr[i]);
	}
}

void XuatLopHoc(LOPHOC lh)
{
	for (int i = 0; i < lh.n; i++)
	{
		XuatSinhVien(lh.arr[i]);
	}
}

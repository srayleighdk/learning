#include "DanhSachMon.h"

void NhapDanhSachMon(DANHSACHMON &ds)
{
	do
	{
		printf_s("\nNhap so luong mon hoc: ");
		scanf_s("%d", &ds.n);
		if (ds.n < 0)
		{
			printf_s("\nSo luong mon hoc khong hop le. Xin kiem tra lai!");
		}
	} while (ds.n < 0);

	ds.arr = new MONHOC[ds.n];

	for (int i = 0; i < ds.n; i++)
	{
		printf_s("\nNhap vao mon hoc thu %d", i + 1);
		NhapMonHoc(ds.arr[i]);
	}
}

void XuatDanhSachMon(DANHSACHMON ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		XuatMonHoc(ds.arr[i]);
	}
}
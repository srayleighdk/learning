#include "MonHoc.h"

void NhapMonHoc(MONHOC &mh)
{
	rewind(stdin);
	printf_s("\nNhap ten mon hoc: ");
	gets_s(mh.TenMon);

	printf_s("\nNhap diem: ");
	scanf_s("%f", &mh.Diem);

	printf_s("\nSo chi: ");
	scanf_s("%d", &mh.SoChi);
}

void XuatMonHoc(MONHOC mh)
{
	printf_s("\nTen mon: %s", mh.TenMon);
	printf_s("\nDiem: %f", mh.Diem);
	printf_s("\nSo chi: %d", mh.SoChi);
}

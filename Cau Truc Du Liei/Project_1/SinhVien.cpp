#include "SinhVien.h"

void NhapSinhVien(SINHVIEN &sv)
{
	

	rewind(stdin);
	printf_s("\nNhap ten sinh vien: ");
	gets_s(sv.Ten);

	printf_s("\nNhap danh sach mon hoc:");
	NhapDanhSachMon(sv.danhsachmon);

}

void XuatSinhVien(SINHVIEN sv)
{
	printf_s("\nMa so: %s", sv.MaSo);
	printf_s("\nTen sinh vien: %s", sv.Ten);
	printf_s("\nDanh sach mon: ");
	XuatDanhSachMon(sv.danhsachmon);
}
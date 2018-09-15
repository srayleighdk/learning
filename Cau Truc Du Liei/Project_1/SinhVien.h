#pragma once
#include "DanhSachMon.h"

struct SinhVien
{
	char MaSo[20], Ten[50];
	DANHSACHMON danhsachmon;
};

typedef struct SinhVien SINHVIEN;

void NhapSinhVien(SINHVIEN &sv);

void XuatSinhVien(SINHVIEN sv);
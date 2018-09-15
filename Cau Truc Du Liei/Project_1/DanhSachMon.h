#pragma once
#include "MonHoc.h"

struct DanhSachMon
{
	int n;
	MONHOC *arr;
};

typedef struct DanhSachMon DANHSACHMON;

void NhapDanhSachMon(DANHSACHMON &ds);

void XuatDanhSachMon(DANHSACHMON ds);


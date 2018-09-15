#pragma once
#include "SinhVien.h"

#pragma once
#include "SinhVien.h"
#include <string.h>
struct LopHoc
{
	int n;
	SINHVIEN *arr;
};

typedef struct LopHoc LOPHOC;

void NhapLopHoc(LOPHOC &);


void XuatLopHoc(LOPHOC);


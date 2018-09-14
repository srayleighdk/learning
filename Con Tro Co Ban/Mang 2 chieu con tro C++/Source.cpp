#include <iostream>
using namespace std;

void NhapMang(int **a, int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "\nNhap vao a[" << i << "][" << j << "]";
			cin >> a[i][j];
			//Cách 2: cin >> *(a[i] + j);
			//Cách 3: cin >> *(*(a + i) + j);
		}
	}
}

void XuatMang(int **a, int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << a[i][j] << "     ";
			//Cách 2: cout << *(a[i] + j);
			//Cách 3: cout << *(*(a + i) + j);
		}
		cout << endl;
	}
}

int main()
{
	int dong = 2, cot = 3;
	int **a;
	a = new int*[dong];
	for (int i = 0; i < dong; i++)
	{
		a[i] = new int[cot];
	}

	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	//Giải Phóng
	for (int i = 0; i < dong; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	system("pause");
	return 0;
}
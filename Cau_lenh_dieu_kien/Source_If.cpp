#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 1000; i++)
	{
		if (i == 256)
			break;
		cout << i << " : " << static_cast<char>(i) << "\t";
	}
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			continue;
		cout << i << "\t";
	};//co the ";" tai cuoi for
	for (int i = 0, j = 3; i < 10 && j < 30; i++, j += 3)
		cout << "i = " << i << "\tj = " << j << "\t";
	int i = 0, a;
	do
	{
		cout << "Da chay 1 lan!" << endl;
	} while (i != 0);
	cout << "Nhap vao mot thang: ";
	cin >> a;
	switch (a)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "Thang 31 ngay!" << endl; break;
	case 2: cout << "Thang 28 ngay!" << endl; break;
	default: cout << "Thang 30 ngay" << endl; break;
	}
	system("pause");
	return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n = 0.123456789f; //float chi luu dc 8 ky tu sau dau cham dong
	cout << "Ep kieu ngam dinh n thanh: " << setprecision(9) << n << endl;
	char a = 4;
	bool b = 1;
	short c = 6;
	cout << typeid(a + b + c).name() << " " << a + b + c << endl; //cac kieu du lieu be hon int khi thuc hien phep tinh quy het ve int, lon hon thi quy ve kieu du lieu lon nhat trong bieu thuc
	cout << "3 / 2 = " << 3 / 2 << "\tKieu du lieu: " << typeid(3 / 2).name() << endl;
	cout << "3.0 / 2 = " << 3.0 / 2 << endl;
	int a1 = 3, b1 = 2;
	cout << "Ep kieu type_C: " << (float)a1 / b1 << endl;  //Ep kieu type_C
	cout << "Ep kieu type_C (Cach khac): " << float(a1) / b1 << endl;   //Ep kieu type_C (Cach khac)
	cout << "Ep kieu static_cast: " << static_cast<float>(a1) / b1 << endl;  //ep kieu static_cast
	system("pause");
	return 0;
}
#include<iostream>
//#include"Constants.h"
using namespace std;
using namespace constants;
#define Year_Of_BIRTH 1999 //nhanh hon nhung it su dung vi luon la bien toan cuc, co the trung ten, co the thay doi khi chay chuong trinh
#define Year_Of_BIRTH 1998
#if 0 //False nen khong thuc thi
//Khong thay doi tham so
int EnterYourYear(const int Year)
{
	int n = 0;
	Year = n;
	return Year;
}
#endif khai bao ham
int main()
{
	int BYTE{ 0 };
	cout << "BYTE = " << BYTE << endl;
	cout << "BYTE = " << constants::BYTE << endl;
	cout << "SPEED_OF_SOUND = " << SPEED_OF_SOUND << endl;
	cout << Year_Of_BIRTH << endl;
#if 1 //True nen thuc thi
	const double PI{ 3.14 };                  // thong dung hon
	double const SPEED_OF_LIGHT{ 300000000 }; // it thong dung hon
	cout << "PI = " << PI << endl << "SPEED_OF_LIGHT = " << SPEED_OF_LIGHT << endl;
#endif khai báo hằng

#if 1
	int n=1.7;
	const int High{ n };
#endif Khoi tao tu bien
	system("pause");
	return 0;
}
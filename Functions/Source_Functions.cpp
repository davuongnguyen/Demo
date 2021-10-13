#include<iostream>
using namespace std;

void Print(int a);  //a la tham so sao chep gia tri cua doi so nen ton vung nho va giam hieu suat
void Calculator(int x, int y, int& tong, int& hieu);  //&tong va &hieu la tham chieu se thay doi gia tri cua doi so va tiet kiem bo nho
void Con(const int& a);   //a la tham chieu hang khong lam thay doi gia tri trong hang va co the la hang, bieu thuc, bien

int main()
{
	int a = 1;
	int x = 2, y = 3, tong, hieu;
	Calculator(x, y, tong, hieu);
	Print(a);     //a la doi so se ko bi thay doi sau khi ket thuc ham
	cout << "Gia tri cua a sau ket thuc ham: " << a << endl;
	cout << "Tong cua " << x << " va " << y << " la: " << tong << endl;
	cout << "Hieu cua " << x << " va " << y << " la: " << hieu << endl;
	Con(a);
	system("pause");
	return 0;
}

void Print(int a)
{
	a = 12;
	cout << "Gia tri trong ham cua a: " << a << endl;
}

void Calculator(int x, int y, int& tong, int& hieu)
{
	tong = x + y;
	hieu = x - y;
}

void Con(const int& a)
{
	a = 69;
	cout << "a khong bi thay doi gia tri khi la tham chieu hang: " << a << endl;
}
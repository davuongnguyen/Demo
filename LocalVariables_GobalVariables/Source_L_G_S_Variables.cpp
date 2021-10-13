#include<iostream>
using namespace std;

int Global = 1;  //Bien toan cuc
static int s_Global = 1;//Bien toan cuc khai bao voi tu khoa static
extern int G_File = 1; //Bien su dung duoc trong moi file chuong trinh (van chua biet)

int Do()
{
	static int a = 1;  //Bien tinh chi bi mat di khi ket thuc ca chuong trinh chu kho mat di do ket thuc lenh
	++a;
	return a;
}

int main()
{
	int l_a = 15;  
	{
		l_a--;   //Lay gia tri cua khoi lenh cha
		cout << "Day la bien cuc bo cha: " << l_a << endl;
		int l_a = 16;   //tam an gia tri cua khoi lenh cha
		cout << "Day la bien cuc bo con: " << l_a << endl;
		l_a++;
	}
	cout << "Day la bien cuc bo cha: " << l_a << endl;    //Lay lai gia tri bi tam an
	cout << "Day la bien toan cuc: " << Global << endl;
	int Global = 2;    //Tam an bien toan cuc
	cout << "Day la bien trong ham main trung ten bien toan cuc: " << Global << endl;
	cout << "Day la bien toan cuc: " << ::Global << endl;  //:: la toan tu phan giai pham vi lay lai gia tri bien toan cuc
	int a = Do();
	int b = Do();
	int c = Do();
	cout << "Lan thu " << a << " thuc hien!" << endl;
	cout << "Lan thu " << b << " thuc hien!" << endl;
	cout << "Lan thu " << c << " thuc hien!" << endl;
}
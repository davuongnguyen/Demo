#include "Nguoi.h"

Nguoi::Nguoi() {}

Nguoi::Nguoi(string id, string ten, int tuoi, string nghe)
{
	setId(id);
	setTen(ten);
	setTuoi(tuoi);
	setNghe(nghe);
}

void Nguoi::setId(string id)
{
	if (_id.empty())
		this->_id = id;
	else
		cout << "So chung minh thu nhan dan khong duoc thay doi" << endl;
}

void Nguoi::setTen(string ten)
{
	this->_ten = ten;
}

void Nguoi::setTuoi(int tuoi)
{
	this->_tuoi = tuoi;
}

void Nguoi::setNghe(string nghe)
{
	this->_nghe = nghe;
}

string Nguoi::getId()
{
	return this->_id;
}

string Nguoi::getTen()
{
	return this->_ten;
}

int Nguoi::getTuoi()
{
	return this->_tuoi;
}

string Nguoi::getNghe()
{
	return this->_nghe;
}

void Nguoi::nhap()
{
	cout << "Nhap so chung minh thu nhan dan: ";
	cin >> _id;
	cout << "Nhap ten: ";
	cin >> _ten;
	cout << "Nhap tuoi: ";
	cin >> _tuoi;
	cout << "Nhap nghe: ";
	cin >> _nghe;
}

void Nguoi::xuat()
{
	cout << "So chung minh thu nhan dan: " << _id << endl;
	cout << "Ten: " << _ten << endl;
	cout << "Tuoi: " << _tuoi << endl;
	cout << "Nghe: " << _nghe << endl << endl;
}
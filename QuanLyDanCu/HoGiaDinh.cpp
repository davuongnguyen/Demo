#include "HoGiaDinh.h"

HoGiaDinh::HoGiaDinh() {}

HoGiaDinh::HoGiaDinh(string id)
{
	setId(id);
}

void HoGiaDinh::setId(string id)
{
	if (_id.empty())
		this->_id = id;
	else
		cout << "ID da duoc khai bao" << endl;
}

void HoGiaDinh::addThanhVien(Nguoi thanhvien)
{
	this->_list.push_back(thanhvien);
	this->_count = _list.size();
}

string HoGiaDinh::getId()
{
	return this->_id;
}

int HoGiaDinh::getCount()
{
	return this->_count;
}

Nguoi HoGiaDinh::getThanhVien(int index)
{
	return this->_list[index];
}

int HoGiaDinh::searchNguoi(string id)
{
	for (int i = 0; i < getCount(); i++)
	{
		if (getThanhVien(i).getId() == id)
			return i;
	}
	return -1;
}

void HoGiaDinh::nhap()
{
	int n;
	string id;
	cout << "Nhap Id: ";
	cin >> id;
	setId(id);
	cout << "Nhap so thanh vien trong gia dinh: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nguoi thu " << i + 1 << ":\n";
		Nguoi thanhvien;
		thanhvien.nhap();
		addThanhVien(thanhvien);
	}
	cout << "\n-----------------------\n";
}

void HoGiaDinh::xuat()
{
	cout <<"Id gia dinh: " << getId() << endl;
	cout << "So thanh vien trong gia dinh: " << getCount() << endl;
	for (int i = 0; i < getCount(); i++)
	{
		cout << "Thanh vien thu " << i + 1 << ":\n";
		getThanhVien(i).xuat();
	}
	cout << "-----------------------\n";
}
#include "ToDanPho.h"

ToDanPho::ToDanPho() {}

void ToDanPho::addHoGiaDinh(HoGiaDinh ho)
{
	this->_list.push_back(ho);
}

void ToDanPho::nhap()
{
	int count;
	cout << "Nhap so luong ho: ";
	cin >> count;
	cout << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "Nhap ho gia dinh thu " << i + 1 << ": " << endl;
		HoGiaDinh ho;
		ho.nhap();
		addHoGiaDinh(ho);
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

HoGiaDinh ToDanPho::getHoGiaDinh(int index)
{
	return this->_list[index];
}

int ToDanPho::getSoluongHo()
{
	return this->_list.size();
}

int ToDanPho::getSoLuongNguoi()
{
	int count = 0;
	for (int i = 0; i < getSoluongHo(); i++)
	{
		count += this->_list[i].getCount();
	}
	return count;
}

void ToDanPho::search()
{
	string id;
	cout << "Nhap so chung minh thu nguoi can tim: ";
	cin >> id;
	cout << endl;
	for (int i = 0; i < getSoluongHo(); i++)
	{
		int n = this->_list[i].searchNguoi(id);
		if (n != -1)
		{
			cout << "Tim thay nguoi co so chung minh " << id << " trong ho gia dinh co Id: " << _list[i].getId() << endl;
			_list[i].getThanhVien(n).xuat();
			return;
		}
	}
	cout << "Khong tim thay nguoi co so chung minh thu: " << id << endl;
}

int ToDanPho::searchIndexHo(string IdHoDancu)
{
	for (int i = 0; i < getSoluongHo(); i++)
	{
		if (IdHoDancu == _list[i].getId())
		{
			return i;
		}
	}
	return -1;
}
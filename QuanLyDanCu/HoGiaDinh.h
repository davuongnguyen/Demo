#pragma once
#include <vector>
#include "Nguoi.h"

class HoGiaDinh : Nguoi
{
private:
	string _id;
	int _count = 0;
	vector<Nguoi> _list;
public:
	HoGiaDinh();
	HoGiaDinh(string id);
	void setId(string id);
	void addThanhVien(Nguoi thanhvien);
	string getId();
	int getCount();
	Nguoi getThanhVien(int index);
	int searchNguoi(string id);
	void nhap();
	void xuat();
};


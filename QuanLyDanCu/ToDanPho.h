#pragma once
#include "HoGiaDinh.h"

class ToDanPho : HoGiaDinh
{
private:
	vector <HoGiaDinh> _list;
public:
	ToDanPho();
	void addHoGiaDinh(HoGiaDinh ho);
	void nhap();
	HoGiaDinh getHoGiaDinh(int index);
	int getSoluongHo();
	int getSoLuongNguoi();
	void search();
	int searchIndexHo(string IdHoDancu);
};


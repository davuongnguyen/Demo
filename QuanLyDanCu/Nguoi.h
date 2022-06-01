#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
private:
	string _id;
	string _ten;
	int _tuoi;
	string _nghe;
public:
	Nguoi();
	Nguoi(string id, string ten, int tuoi, string nghe);
	void setId(string id);
	void setTen(string ten);
	void setTuoi(int tuoi);
	void setNghe(string nghe);
	string getId();
	string getTen();
	int getTuoi();
	string getNghe();
	void nhap();
	void xuat();
};
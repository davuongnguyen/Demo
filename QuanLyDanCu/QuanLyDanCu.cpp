// QuanLyDanCu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Nguoi.h"
#include "HoGiaDinh.h"
#include "ToDanPho.h"
#include <conio.h>

using namespace std;

void ThemHoGiaDinh();
void ThemDanCu();
void ThongKeDanCu();
void TraCuuThongTinHo();

ToDanPho todanpho;

int main()
{
	while (true)
	{
		cout << "Lua chon chuc nang: " << endl;
		cout << "1. Khoi tao to dan pho" << endl;
		cout << "2. Them ho gia dinh" << endl;
		cout << "3. Them dan cu" << endl;
		cout << "4. Thong ke dan cu" << endl;
		cout << "5. Tim kiem thong tin dan cu" << endl;
		cout << "6. Tra cuu thong tin ho gia dinh" << endl;
		cout << "7. Xoa man hinh" << endl;
		cout << "8. Thoat" << endl;
		char n = _getch();
		
		if (n == '1')
		{
			todanpho.nhap();
		}
		else if (n == '2')
		{
			ThemHoGiaDinh();
		}
		else if (n == '3')
		{
			ThemDanCu();
		}
		else if (n == '4')
		{
			ThongKeDanCu();
		}
		else if (n == '5')
		{
			todanpho.search();
		}
		else if (n == '6')
		{
			TraCuuThongTinHo();
		}
		else if (n == '7')
		{
			system("cls");
		}
		else if (n == '8')
		{
			break;
		}
	}

	system("pause");
	return 0;
}

void ThemHoGiaDinh()
{
	HoGiaDinh hgd;
	hgd.nhap();
	todanpho.addHoGiaDinh(hgd);
}

void ThemDanCu()
{
	string id;
	Nguoi dancu;
	cout << "Nhap Id ho gia dinh muon them dan cu: ";
	cin >> id;
	int temp = todanpho.searchIndexHo(id);
	if (temp != -1)
	{
		dancu.nhap();
		todanpho.getHoGiaDinh(temp).addThanhVien(dancu);
	}
	else
		cout << "Khong tim thay ho gia dinh co id :" << id << endl;
}

void ThongKeDanCu()
{
	cout << "\n*******************\n";
	cout << "So luong ho gia dinh trong to dan pho: "<< todanpho.getSoluongHo()<< endl;
	cout << "So luong dan cu: " << todanpho.getSoLuongNguoi() << endl;
	cout << "\n*******************\n";
}

void TraCuuThongTinHo()
{
	string id;
	Nguoi dancu;
	cout << "Nhap Id ho gia dinh muon tra cuu: ";
	cin >> id;
	int temp = todanpho.searchIndexHo(id);
	if (temp != -1)
	{
		cout << "Thong tin ho gia dinh can tim: " << endl;
		todanpho.getHoGiaDinh(temp).xuat();
	}
	else
		cout << "Khong tim thay ho gia dinh co id :" << id << endl;
}
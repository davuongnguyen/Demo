#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Chuoi;         //Khoi tao chuoi
	string Chuoi_Rong("");
	string Chuoi_1("Chuoi1");
	string Chuoi_2{ "Chuoi2" };
	string Chuoi_3 =  "88" ;     //88 khong duoc coi la mot so khi khoi tao duoi dang chuoi nen khong thuc hien duoc cac bieu thuc toan hoc

	Chuoi = Chuoi_3;   //Gan gia tri Chuoi_3 cho Chuoi

	cout << Chuoi << "\n" << Chuoi_Rong << "\n" << Chuoi_1 << "\n" << Chuoi_2 << "\n" << Chuoi_3 << endl; //Xuat chuoi

#if 1
	string HoVaTen, Tuoi;
	cout << "Nhập tên của bạn khoảng trắng tuổi của bạn: "; 
	cin >> HoVaTen;               //cin chi nhap duoc cac ky tu lien nhau khong co dau space
	cin >> Tuoi;
	cout << HoVaTen << endl << Tuoi << endl;
	cout << "cin chi nhap duoc cac ky tu lien nhau nen gap dau space se chuyen data sau vao bo nho dem de cho lenh tiep theo!" << endl;
#endif Nhap du lieu string dung cin khong chua khoang trang

#if 1
	cin.ignore(32767, '\n');
	string HoVaTen1, Tuoi1;
	cout << "Nhap ho ten va tuoi cua ban (co dau cach): "; 
	getline(cin, HoVaTen1);           //Khi co phim enter se ket thuc lenh getline
	cout << "Nhap tuoi cua ban: ";
	getline(cin, Tuoi1);
	cout << HoVaTen1<< endl << Tuoi1 << endl;
#endif Nhap du lieu co chua khoang trang dung getline

#if 1
	string Name;
	int Age;
	cout << "Nhap so tuoi: ";
	cin >> Age;
	cin.ignore(32767, '\n');      // Xóa khỏi bộ nhớ đệm 32767 ký tự (toi da luu dc 32767 ky tu trong bo nho dem), hoặc đến khi gặp ký tự '\n'
	cout << "Nhap ten cua ban: ";
	getline(cin, Name);
	cout << "Tuoi cua ban la: " << Age << endl << "Ten cua ban la: " << Name << endl;
	cout << "Neu kho co cin.ignore(32767,'\\n') thi se ko nhap dc ten" << endl;
#endif Xoa bo nho dem

#if 1
	string Write;
	cout << "Viet nhung dieu ban thich (co the nhieu dong, ket thuc bang dau / roi an Enter): ";
	getline(cin, Write, '/');         //Ket thuc khi co /
	cout << Write << endl;
#endif Nhap du lieu nhieu dong

#if 1
	string Ngay{ "15" };
	string Thang{ "04" };
	string Nam{ "1999" };
	Ngay += "/";
	string Thoigian = Ngay + Thang + "/" + Nam;
	cout << Thoigian << endl;
#endif Noi chuoi

#if 1
	string BietDanh = "Aximi";
	cout << "Biet danh " << BietDanh << " co " << BietDanh.length() << " ky tu!" << endl;
	cout << "Biet danh " << BietDanh << " co " << BietDanh.size() << " ky tu!" << endl;
#endif Do dai chuoi

	system("pause");
	return 0;
}
#define _CRT_NONSTDC_NO_DEPRECATE   //Bo qua canh bao cho lenh str_lwr() va str_upr()
#define _CRT_SECURE_NO_WARNINGS     //Bo qua canh bao cho lenh strcpy()

#include<iostream>
#include<cstring>   //Thu vien gom cac lenh thao tac voi mang C-style

using namespace std;

int main()
{
	char name[]{ "C-style" };      //Khoi tao mot mang gom 8 phan tu: "C-style" va '\0'
	char name_v2[100]{ "C_style" };//Khoi tao mang ky tu co 100 phan tu, cac ky tu dau la "C-style, sau deu la NULL
	char name1[5];            //Mang gom 5 ky tu, ky tu cuoi mac dinh la \0(Null)
	cout << "Nhap vao ten cua ban: ";
	cin >> name1;             //Nhap gia tri cho mang ky tu, se bao loi neu nhap qua 4 ky tu(1 ky tu cuoi mac dinh la NULL)
	cout << name << endl << "name = " << name1 << endl;
	char name2[5];
	cout << "Nhap lai ten cua ban: ";
	cin.ignore(32767, '\n');
	cin.getline(name2, 5);    //Giai quyet van de tran mang va nhan tat ca cac ky tu ke ca khoang trang
	cout << name << " (da fix):" << endl << "name = " << name2 << endl;
	cout << "Do dai mang ky tu name_v2 (" << name_v2 << ") khong bao gom ky tu NULL la: " << strlen(name_v2) << endl;
	cout << "So phan tu trong mang name_v2 (" << name_v2 << ") la: " << sizeof(name_v2) << endl;
	_strupr_s(name_v2);       //Co the bo _s neu co dong lenh #define _CRT_NONSTDC_NO_DEPRECATE 
	cout << "Mang name_v2 sau khi chuyen thanh viet hoa la: " << name_v2 << endl;
	_strlwr_s(name_v2);       //Co the bo _s neu co dong lenh #define _CRT_NONSTDC_NO_DEPRECATE 
	cout << "Mang name_v2 sau khi chuyen thanh viet thuong la: " << name_v2 << endl;
	char name_v3[100];
	strcpy_s(name_v3, name_v2);  //Co the bo _s neu co dong lenh #define _CRT_SECURE_NO_WARNINGS (_s de chuong trinh co the canh bao van de tran mang som)
	cout << "Mang nam_v3 sau khi coppy mang name la: " << name_v3 << endl;
	strcat_s(name_v2, 100, " ");   //Khi co _s se co them 1 tham so o giua giup khai bao do dai mang tranh tran mang
	strcat_s(name_v2, 100, name2);
	cout << "Mang sau khi ghep la: " << name_v2 << endl;
	int sosanh = strcmp(name_v2, name_v3);  //so sanh hai mang theo bang ma ASCII
	if (sosanh == 0)
		cout << name_v2 << " = " << name_v3 << endl;
	else if (sosanh < 0)
		cout << name_v2 << " < " << name_v3 << endl;
	else
		cout << name_v2 << " > " << name_v3 << endl;
	if (strstr(name_v2, name_v3) == NULL)     //Tim kiem mang name_v3 trong name_v2, neu co tra ve vi tri dau xuat hien dau tien cua v3 trong v2, khong thay tra ve NULL
		cout << "Khong tim thay " << name_v3 << " trong " << name_v2 << endl;
	else
		cout << "Tim thay " << name_v3 << " trong " << name_v2 << endl << "Vi tri tim thay la: " << strstr(name_v2, name_v3) << endl;
	system("pause");
	return 0;
}
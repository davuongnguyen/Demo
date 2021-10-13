#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	for (int i = 0, j = 1; (i + j) < 10; i += 2,j += 2)//Khai bao bien phai cung kieu du lieu
	{
		cout << "So chan: " << i << endl;
		cout << "So le: " << j << endl;
	}
	{
		string a, Usename{ "Davuongnguyen" };
		int b, Password{ 15041999 }, dem = 0;
		do            //Vong lap do_while thuc hien it nhat mot lan
		{
			if (dem != 0)
			{
				system("cls");   //Xoa sach man hinh
				cout << "Login fail!" << endl;
			}
			cout << "Usename: ";
			getline(cin, a);
			cout << "Password: ";
			cin >> b;
			if (cin.fail())     //Neu dinh dang cin sai
			{
				cin.clear();               //Reset failbit
				cin.ignore(32767, '\n');   //Bo qua bo nho dem
			}
		} while ((a != Usename) || (b != Password));
		cout << "Login succeed!" << endl;
	}
	{
		int a = 0;
		while (true)                // neu bieu thuc la true, vong lap se tiep tuc
		{
			if (a > 10)
				break;             //Gap lenh nay, chuong trinh se ket thuc vong lap
			if ((a % 2) != 0)
			{
				++a;
				continue;          //Gap lenh nay, chuong trinh se lap tuc nhay den cuoi vong lap
			}
			cout << "a = " << a << endl;
			if (a == 10)
				goto KetThuc;    //Nhay den KetThuc
			a++;
		}
	}
	KetThuc:
		cout << "----------End----------" << endl;
	system("pause");
	return 0;
}
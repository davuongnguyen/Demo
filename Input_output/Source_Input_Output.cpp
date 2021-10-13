#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int day{ 0 }, month{ 0 }, year{ 0 };
	cout << "Enter your birthday: ";
	cin >> day >> month >> year;
	cout << "Your birthday: " << setw(2) << day << "/" << setw(2) << left << month << "/" << setw(5) << right << year << endl;
	cout << setfill('_');
	cout << setw(23) << "-" << endl;
	int n;
	cout << "Enter n (hexadecimal): ";
	cin >> hex >> n; //nhap so thap luc phan
	cout << "Octal: " << oct << n << endl;
	cout << "Decimal: " << dec << n << endl;
	system("pause");
	return 0;
}
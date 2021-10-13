//For-each loop được sử dụng để lặp qua các phần tử trên 1 mảng 
//(hoặc các cấu trúc danh sách khác như vectors, linked lists, trees, và maps).
#include <iostream>

using namespace std;

#if 0
void Printarray(int arr[])
{
	for (int item : arr)				//Loi bien dich vi arr chi la mot con tro	
	{
		cout << item << endl;			
	}
}
#endif for_each khong hoat dong voi con tro

int main()
{
	int arr[] = { 1,2,3,4,5 };
	for (int item : arr)				//int co the thay the bang auto
	{
		cout << item << endl;
	}
	for (auto& item : arr)				//Vong lap for each voi tham chieu
	{
		cout << item << "\t";
	}
	cout << endl;
	for (const auto& item : arr)		//Neu khong muon thay doi gia tri tham chieu ta dung const, cach nay co hieu suat cao nhat
	{
		cout << item << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}
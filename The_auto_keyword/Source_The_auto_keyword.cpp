#include<iostream>

using namespace std;

auto Tong(int a, int b)
{
	return a + b;
}

int main()
{
	auto sum = Tong(2, 3);
	cout << "type of 'sum' : " << typeid(sum).name() << endl;
	system("pause");
	return 0;
}
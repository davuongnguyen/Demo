#include<iostream>
using namespace std;
int main()
{
	cout << "Hello world!" << endl;
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;

	// C++11, may not be supported by your compiler
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl;

	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;

	// C++11, may not be supported by your compiler
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl;

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

	// You can also use the sizeof operator on a variable name
	int n;
	cout << "n variable:\t" << sizeof(n) << " bytes" << endl;
	system("pause");
	return 0;
}
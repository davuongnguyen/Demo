#include<iostream> 
#include<cstdlib>        //Cu hon
#include<random>         //Moi hon tu chuan c/c++ 11
#include<ctime>         //Thu vien lay ham time
#include<iomanip>

using namespace std;

int main()
{
#if 1
	srand(time(NULL));    //Tao ra nhung bo so nga nhien khac nhau tu hat giong time(null), moi hat giong khac nhau se co mot bo so khac nhau
	                      //time(NULL) hoac time(0) se lay so giay tu 00:00 gio, ngay 01, thang 01, nam 1970 
	int r1 = rand();             //Tra ve mot so ngau nhien tu 0 den RAND_MAX( = 32767)
	int r2 = rand() % 100;       //Tra ve 100 so, bat dau tu so 0 (0 den 99)
	int r3 = rand() % 100 + 1;   //tra ve 100 so, bat dau tu so 1 (1 den 100)
	int r4 = rand() % 23 + 67;   //Tra ve 32 s0, bat dau tu 67 (67 den 98)
	cout << r1 << "\t" << r2 << "\t" << r3 << "\t" << r4 << endl;
#endif cstdlib
#if 1
	random_device rd;          //Lay ra mot hat giong (seed) ten rd chu khong can lay du lieu tu thoi gian
	mt19937 rng(rd());         //Co the thay bang mt19937_64 de lay 64 bit thay co 32 bit (Mersenne-Twister in this case)
	                           //Ten rng, truyen doi so rd
	auto a = rng();            //Phat sinh ra 1 so lon hon 0
	cout << a << " ( " << typeid(a).name() << " ) " << endl;
	uniform_int_distribution<int> unit(1, 100);     //Gioi han kieu du lieu la <int>, gia tri tu 1 den 100
	for (int i = 0; i < 10; i++)
	{
		int a = unit(rng);
		cout << a << " ( " << typeid(a).name() << " ) " << "\t";
	}
	cout << endl;
#endif Mersenne-Twister
	system("pause");
	return 0;
}
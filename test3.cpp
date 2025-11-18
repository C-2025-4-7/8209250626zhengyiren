#include<iostream>
using namespace std;
int main()
{
	cout << "char length: " << sizeof(char) << " byte" << endl;
	cout << "int length: " << sizeof(int) << " bytes" << endl;
	cout << "short length: " << sizeof(short) << " bytes" << endl;
	cout << "long length: " << sizeof(long) << " bytes" << endl;
	cout << "float length: " << sizeof(float) << " bytes" << endl;
	cout << "double length: " << sizeof(double) << " bytes" << endl;
	cout << "long double length: " << sizeof(long double) << " bytes" << endl;
	cout << "wchar_t length: " << sizeof(wchar_t) << " bytes" << endl;
	return 0;
	
}
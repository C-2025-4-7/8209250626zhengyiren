#include<iostream>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	const char* p = hexString;
	while (*p != '\0') {
		char c = *p;
		int val;
		if (c >= '0' && c <= '9') val = c - '0';
		else if (c >= 'A' && c <= 'F') val = 10 + c - 'A';
		else if (c >= 'a' && c <= 'f') val = 10 + c - 'a';
		else return -1;
		result = result * 16 + val;
		p++;
     }
	return result;
}
int main()
{
	char hex[100];
	cout << "Enter 16进制字符串：";
	cin >> hex;
	cout << "10进制结果：" << parseHex(hex) << endl;
	return 0;
}
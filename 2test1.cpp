#include<iostream>
using namespace std;
int main()
{ 
	cout << "请输入一个字符：";
	char ch;
    cin >> ch;
	if (ch>='a'&&ch<='z')
	{
		ch -= 32;
		cout << "转换为大写：" << ch << endl;
	}
	else {
		cout << "后继字符的ASCII码：" << (int)(ch + 1) << endl;
	}
	return 0;
}
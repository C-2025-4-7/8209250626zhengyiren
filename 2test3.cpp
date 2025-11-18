#include<iostream>
using namespace std;
int main()
{
	double a, b, c,C;
	cout << "请输入三角形的三边长：";
	cin >> a >> b >> c;
	
	if (a + b > c && a + c > b && b + c > a)
	{
		C = a + b + c;
		cout << "三角形的周长为：" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "不能构成三角形" << endl;
	}
	return 0;

}
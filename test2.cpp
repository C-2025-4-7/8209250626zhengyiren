#include<iostream>
using namespace std;	
const double PI = 3.14159;
int main() 
{
	double r;
	cout << "请输入圆锥的底面半径：" << endl;
	cin >> r;
	double h;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	double volume = (1.0 / 3) * PI * r * r * h;	
	cout << "圆锥的体积是：" << volume << endl;
	return 0;

	 
}
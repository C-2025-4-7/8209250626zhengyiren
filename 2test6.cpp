#include<iostream>
using namespace std;
int main()
{
	unsigned int a,b,originalA,originalB;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	originalA = a;
	originalB = b;
	while (b != 0)
	{
		unsigned int temp = b;
		b = a % b;
		a = temp;
	}
	int gcd = a;
	int lcm = (originalA * originalB) / gcd;
	cout << "最大公约数为：" << gcd << endl;
	cout << "最小公倍数为：" << lcm << endl;
	return 0;

	

}
#include<iostream>
using namespace std;
void gcd_lcm(int m, int n,int &gcd_val,int &lcm_val)
{
	int a = m, b = n;
	while (b!= 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd_val = a;
	lcm_val = (m * n) / gcd_val;
    
}
int main()
{
	int m, n, gcd_val,lcm_val;
	cout << "请输入两个自然数m,n:" << endl;
	cin >> m >> n;
	gcd_lcm(m, n, gcd_val, lcm_val);
	cout << "最大公约数：" << gcd_val << endl;
	cout << "最小公倍数：" << lcm_val << endl;
	return 0;
}

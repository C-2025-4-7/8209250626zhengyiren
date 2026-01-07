#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1) return false;
	if (num == 2) return true;
	if (num % 2 == 0) return false;
	for (int i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main()
{   
	int a;
	cout << "请输入一个整数：" << endl;
	cin >> a;
	if (is_prime(a)) {
		cout << "该整数是素数" << endl;
	}
	else cout << "该整数不是素数" << endl;
	int count = 0, num = 2;
	cout << "前200个素数：" << endl;
	while (count <= 200) {
		if (is_prime(num)) {
			cout << num << "\t";
			count++;
			if (count % 10 == 0) cout << endl;
		}
		num++;
	}
}
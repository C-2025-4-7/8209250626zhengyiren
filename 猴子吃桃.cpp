#include<iostream>
using namespace std;
int peach_count(int day) {
	if (day == 10) return 1;
	return(peach_count(day + 1) + 1) * 2;
}
int main()
{
	cout << "第一天摘的桃子数：" << peach_count(1) << endl;
	return 0;
}
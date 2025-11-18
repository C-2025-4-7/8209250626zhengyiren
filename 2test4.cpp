#include<iostream>
using namespace std;
int main()
{
	double num1, num2,sum;
	char op;
	cout << "请输入两个数字和一个运算符（+、-、*、/、%）：";
	cin >> num1 >> num2 >> op;
	switch (op)
	{
	case'+':
		sum = num1 + num2;
		cout << "结果是：" << sum << endl;
		break;
	case'-':
		sum = num1 - num2;
		cout << "结果是：" << sum << endl;
		break;
	case'*':
		sum = num1 * num2;
		cout << "结果是：" << sum << endl;
		break;
	case'/':
		if (num2 != 0)
		{
			sum = num1 / num2;
			cout << "结果是：" << sum << endl;
		}
		else
			cout << "除数不能为零！" << endl;
		break;
	case'%':
		if (num2 != 0)
		{
			sum = (int)num1 % (int)num2;
			cout << "结果是：" << sum << endl;
		}
		else
			cout << "取余的除数不能为零！" << endl;
		break;
	default:
		cout << "错误：非法运算符" << endl;
	}return 0;
}
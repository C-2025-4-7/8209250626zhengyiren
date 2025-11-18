#include<iostream>
using namespace std;
int main()
{
	int letter = 0, space = 0,digit = 0,other = 0;
	char c;
	cout << "请输入一行字符，以回车结束：" << endl;
	while((c=getchar())!= '\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letter++;
		else if(c==' ')
			space++;
		else if(c>='0'&&c<='9')
			digit++;
		else
			other++;
	}
	cout << "字母个数：" << letter << endl;
	cout << "空格个数：" << space << endl;
	cout << "数字个数：" << digit << endl;
	cout << "其他字符个数：" << other << endl;
	return 0;

}
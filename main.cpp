#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud1;
	stud1.set_value(007, "tcg", 'm');
	cout << "学生1的信息：" << endl;
	stud1.display();
	return 0;
}
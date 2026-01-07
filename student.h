#ifndef STUDENT_H
#define STUDENT_H
#include<cstring>
class Student
{
public:
	void display();
	void set_value(int n,const char* nm,char s)
		{
		num = n;
		strcpy_s(name, nm);
		sex = s;
		}
private:
	int num;
	char name[20];
	char sex;
};

#endif

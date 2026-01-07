#include<iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "修改后坐标：(" << x << "." << y << ")" << endl;
	}
};
int main()
{
	Point p1;
	cout << "初始化后：";
	p1.display();
	p1.setPoint(15, 25);
	cout << "修改后：";
	p1.display();
	return 0;
}
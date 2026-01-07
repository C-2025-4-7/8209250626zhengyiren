#include<iostream>
using namespace std;
class Box {
private:
	double length;
	double width;
	double height;
public:
	void input()
	{
		cin >> length >> width >> height;
	}
	void get_volume(double &volume)
	{   
		volume=length* width* height;
	}
	void output(int index) {
		double volume;
		get_volume(volume);
		cout << "第" << index << "个长方柱体积：" << volume<<endl;
	}

};
int main()
{
	Box box[3];
	for (int i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 << "个长方柱的长，宽，高：";
		box[i].input();
	}
	for (int i = 0; i < 3; i++) {
		box[i].output(i + 1);
	}
	return 0;
}
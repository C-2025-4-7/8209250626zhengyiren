#include<iostream>
using namespace std;

class Student {
public:
	int num;
	int score;
};

void max(Student* p, int n)
{
	int max_score = p[0].score;
	int max_num = p[0].num;
	for (int i=0; i < n; i++) {
		if (p[i].score > max_score) {
			max_score = p[i].score;
			max_num = p[i].num;
		}
	}
	cout << "最高成绩：" << max_score << endl;
	cout << "对应学号：" << max_num << endl;

}
int main()
{
	Student stu_arr[5]={
		{101,85},
		{102,92},
		{103,78},
		{104,95},
		{105,88}
	};
	max(stu_arr, 5);
		return 0;
}

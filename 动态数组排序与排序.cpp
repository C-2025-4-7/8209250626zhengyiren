#include<iostream>
using namespace std;
void sortArray(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
}
int main() {
	int n;
	cout << "Enter 数组长度：";
	cin >> n;
	int* arr = new int[n];
	cout << "Enter 数组元素：";
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
	}
	sortArray(arr, n);
	cout << "排序后数组：";
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	delete[]arr;
	return 0;
}
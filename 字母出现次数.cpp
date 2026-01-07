#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int i = 0;
	while (s[i] != '\0') {
		char current = s[i];
		if (current >= 'A' && current <= 'Z') {
			current = current - 'A' + 'a';
		}
		if (current >= 'a' && current <= 'z') {
			int index = current - 'a';
			counts[index]++;
		}
		i++;
	}
}
int main()
{
	char s[100];
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0) {
			cout << (char)('a' + i) << ":" << counts[i] << " ";
			if (counts[i] == 1) {
				cout << "time" << endl;
			}
			else {
				cout << "times" << endl;
			}
		}
		
	}
	return 0;

}
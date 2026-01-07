#include<iostream>
using namespace std;
int getStrlen(const char s[])
{
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	return len;
}
int indexOf(const char s1[], const char s2[])
{
	int len1 = getStrlen(s1), len2 = getStrlen(s2);
	if (len1 > len2) return -1;
	for (int i = 0; i < len2 - len1; i++) {
		bool match = true;
		for (int j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j]) {
				match = false;
				break;
			}
		}
		if (match)return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin >> s1;
	cin.ignore();
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << indexOf(s1, s2) << endl;
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

int Practice7(string& str) {
	if (str.empty())
		return 0;
	rsize_t index = str.rfind(' ');
	if (index == string::npos)
		return str.size();
	return str.size() - index - 1;
}

int main() {
	string str;
	getline(cin, str);
	int len = Practice7(str);
	cout << len;
	return 0;
}
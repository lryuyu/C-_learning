#include <iostream>
using namespace std;
#include <vector>

class Practice3
{
public:
	void reverseString(vector<char>& s)
	{
		if (s.empty())
			return;
		int start = 0;
		int end = s.size() - 1;
		while (start < end)
		{
			swap(s[start], s[end]);
			start++;
			end--;
		}
	}
};
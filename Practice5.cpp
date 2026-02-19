#include <iostream>
using namespace std;

class Practice5 {
public: 
	bool isDigtalOrWord(char ch)
	{
		if ((ch >= '0' && ch <= '9')
			|| (ch >= 'A' && ch <= 'Z')
			|| ch >= 'a' && ch <= 'z')
				return true;
		return false;
	}
	bool isPalindrome(string s)
	{
		if (s.empty())
			return true;
		for (int i = 0; i < s.size(); ++i)
		{
			s[i] = tolower(s[i]);
		}
		int left = 0;
		size_t right = s.size() - 1;
		while (left < right)
		{
			while (left < right && !isDigtalOrWord(s[left])) {
				left++;
			}
			while (right < left && !isDigtalOrWord(s[left])) {
				right--;
			}
			if (s[left] != s[right])
			{
				return false;
			}
			left++;
			right++;
		}
		return true;
	}
};
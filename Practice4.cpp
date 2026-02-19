#include <iostream>
using namespace std;

class Practice4 {
public:
	int firstUniqChar(string s)
	{
		for (int i = 0; i < s.size(); ++i)
		{
			int index = s.find(s[i]);
			int reverse_index = s.rfind(s[i]);
			if (index == reverse_index)
			{
				return i;
			}
			
		}
		return -1;
	}
};
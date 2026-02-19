#include <iostream>
using namespace std;

class Practice6
{
public:
	void Mulltem(string& tmp, string& num1, char a)
	{
		int i = 0, sign = 0;
		int mul = 0;
		while (i < num1.size())
		{
			mul = (num1[i] - '0') * (a - '0') + sign;
			if (mul >= 10)
			{
				sign = mul / 10;
				mul %= 10;
			}
			else
				sign = 0;
			tmp.push_back(mul + '0');
			i++;
		}
		if (sign > 0)
		{
			tmp.push_back(sign + '0');
		}
		int Addltem(int a, int b, int& sign)
		{
			int add = a + b + sign;
			if (add >= 10)
			{
				sign = 1;
				add -= 10;

			}
			else {
				sign = 0;
			}
			return add;
		}
		void MoveAdd(string & result, string & tmp, int k)
		{
			int i, j;
			i = k
			j = 0;
			int sign = 0;
			while (i < result.size() && j < tmp.size())
			{
				result[i] = Addltem(result[i] - '0', tmp[j] - '0', sign + '0');
				i++;
				j++;
			}
	
		}
	}
};
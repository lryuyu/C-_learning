#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

class  Practice2
{
public:
	int Addltem(int a, int b, int& sign)
	{
		int sum = a + b + sign;
		if (sum >= 10)
		{
			sum -= 10;
			sign = 1;
		}
		else
			sign = 0;
		return sum;
	}
	string addStrings(string num1, string num2)
	{
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		int i=0, j=0, sign=0;
		int sum = 0;
		string res;
		while (i < num1.size() && j < num2.size())
		{
			sum = Addltem(num1[i] - '0', num2[j] - '0', sign);
			res.push_back(sum + '0');
			i++;
			j++;
		}
		while (i < num1.size())
		{
			sum = Addltem(num1[i] - '0', 0, sign);
			res.push_back(sum + '0');
			i++;
		}
		while (j < num2.size())
		{
			sum = Addltem(0, num2[j] - '0', sign);
			res.push_back(sum + '0');
			j++;
		}
		if (sign > 0)
			res.push_back(sign + '0');
		reverse(res.begin(), res.end());
		return res;
	}
};
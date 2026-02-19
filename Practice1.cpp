#include <iostream>
using namespace std;

class Practice1
{
public:
    int myAtoi(string str)
    {
        bool sign = true;
        int i = 0;
        while (i < str.size() && str[i] == ' ')
        {
            i++;
        }
        if (str[i] == '-')
        {
            sign = false;
            i++;
        }
        if (str[i] == '+')
        {
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9')
            return 0;
        long res = 0;
        int num = 0;
        int border = INT_MAX / 10;
        while (i < str.size())
        {
            if (str[i] < '0' || str[i] > '9')
                break;
        }
        if (res > border || res == border && str[i] > '7')
            return sign == true ? INT_MAX : INT_MIN;
        num = str[i] - '0';
        res = res * 10 + num;
        i++;

        return sign == true ? res : -res;
    }
       
};
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& v)
    {
        int value = 0;
        for(auto e : v)
        {
            value ^= e;
        }
        return value;
    }
};

int main()
{
    Solution();
    return 0;
}
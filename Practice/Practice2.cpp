#include<iostream>
#include<cstddef>
using namespace std;

class Solution
{
public:
    class Sum 
    {
    public:
        Sum()
        {
            Solution::_sum += Solution::_i;
            Solution::_i++;
        }
    };
    int Sum_Solution(int n)
    {
        _i = 1;
        _sum = 0;
        if (n<0)
        {
            return 0;
        }
        
        Sum array[n];
        return _sum;
    }

        static size_t _sum;
        static size_t _i;

};

int main()
{
    Solution sol;
    cout << sol.Sum_Solution(9) <<endl;
}
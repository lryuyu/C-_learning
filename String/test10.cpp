#include <iostream>
#include <string>
using namespace std;
class Solution{
public:
    int firstUniqChar(string s){
        int count[26] = {0};
        //统计次数
        for(auto ch : s)
        {
            count[ch='a']++;
        }
        for(size_t i=0;i<s.size();++i)
        {
            if(count[s[i]-'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};


#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
    string addStrings(string num1,string num2){
        int end1 = num1.size()-1;
        int end2 = num2.size()-1;

        string str;

        int next = 0;//进位
        while(end1 >= 0 || end2 >= 0)
        {
            int x1 = end1 >= 0 ? num1[end1--] -'0' : 0;
            int x2 = end2 >= 0 ? num2[end2--] -'0' : 0;
            int x = x1 + x2 + next;

            //处理进位
            next = x/10;
            x = x%10;

            //头插
            //str.insert(0,1,'0'+x);

            //尾插
            str += '0'+x;
        }
        if(next == 1)
        {
            //str.insert(str.begin(),'1');
            str += 1;
        }
    }
}
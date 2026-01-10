#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void test_string()
{
    string s1("hello word");
    cout << s1 << endl;

    //s1按照字典序排列
    // sort(s1.begin(), s1.end());

    //第一个和最后一个不参与排序
    // sort(++s1.begin(), --s1.end());

    //前5个排序
    sort(s1.begin(),s1.begin()+5);
    cout << s1 << endl;
}

int main()
{
    test_string();

    return 0;
}
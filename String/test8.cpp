#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void test_string()
{
    string s1("hello word");
    cout << s1 << endl;

    s1.assign("1111111");//相当于赋值，把当前的东西清空了
    cout << s1 << endl;

    //modifier修改
    //insert(重点)慎用，效率不高->o(N),实践中效率也不高
    string s2("hello word");
    s2.insert(0,"xxxx");//头插
    cout << s2 << endl;

    s2.insert(0,1,'a');
    cout << s2 << endl;

    s2.insert(s2.begin(),s1.begin(),s2.end());
    cout << s2 << endl;

    // //erase慎用和insert一样
    // s1.erase(0,1);
    // cout << s1 << endl;

    //replace替换,要挪动数据，效率不高
    s2.replace(5,1"20%");
    cout << s2 << endl;
}

int main()
{
    test_string();

    return 0;
}
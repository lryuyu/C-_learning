#include <iostream>
#include <string>
#include <list>
using namespace std;

void test_string()
{
    string s1("hello word");

    //iterator 可读可写
    //const_iterator 只读 迭代器指向的数据不能写(类比指针 const int*)
    //const iterator 迭代器本身不能写(类比指针 int* const)
    // string::iterator it1 = s1.begin();
    auto it1 = s1.begin();
    while (it1 != s1.end())
    {
        //*it1+=3;
        cout << *it1 << " ";
        ++it1;
    }
    cout << endl;

    string s2("hello word");
    string::reverse_iterator it2 = s2.rbegin();
    while (it1 != s2.end())
    {
        //*it2+=3;
        cout << *it2 << " ";
        ++it2;
    }
    cout << endl;

    //const_reverse_iterator 只读，不能修改
    // string::const_reverse_iterator cit1 = s1.rbegin();
    auto cit1 = s1.rbegin();
    while (cit1 != s1.end())
    {
        //*it2+=3;
        cout << *cit1 << " ";
        ++cit1;
    }
    cout << endl;
}

int main()
{
    test_string();

    return 0;
}
#include <iostream>
#include <string>
#include <list>
using namespace std;

void test_string()
{
    string s1("hello word");

    //遍历方式1：下表+[]
    for(size_t i = 0;i < s1.size(); i++)
    {
        cout << s1[i] <<" ";
    }
    cout << endl;

    //遍历方式2：迭代器
    string::iterator it1 = s1.begin();
    while (it1 != s1.end())
    {
        *it1+=3;
        cout << *it1 << " ";
        ++it1;
    }
    cout << endl;

    //遍历方式3：范围for
    //底层角度就是迭代器
    for (auto e : s1)
    {
        cout << e << " ";
    }
    cout << endl;

    list<int> lt1;
    lt1.push_back(1);
    lt1.push_back(2);
    lt1.push_back(3);


}
// template<class T>
// struct ListNode
// {
//     ListNode<T>* _next;
//     ListNode<T>* _prev;
//     T _data;
// };
// template<class T>
// class list
// {
// private:
//     ListNode<T>* _head;
// }


int main()
{
    test_string();

    return 0;
}
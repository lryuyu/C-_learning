#include <iostream>
#include <vector>
#include <string>
using namespace std;

// template<class T>
// class vector
// {
// private:
//     T* _a;
//     size_t _size;
//     size_t _capacity;
// };

void test()
{

    vector<double> v2;
    // vector<string> v3;

    //尾插
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //迭代器遍历
    vector<int>::iterator it1 = v1.begin();
    while (it1 != v1.end())
    {
        cout << *it1 << " ";
        ++it1;
    }
    cout << endl;

    for(auto e : v1)
    {
        cout << e << " ";
    }
    cout << endl;
    
    
}

int main()
{
    test();
    return 0;
}
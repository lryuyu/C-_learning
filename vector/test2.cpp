#include <iostream>
#include <vector>
#include <string>
using namespace std;

void test()
{
    vector<string> v1;

    string s1("张三");
    v1.push_back(s1);

    v1.push_back(string("李四"));

    v1.push_back("王五");

    v1[1] += "来";

    for (auto e : v1)
    {
        cout << e << " ";
    }
    cout << endl;
};

int main()
{
    test();
    return 0;
}
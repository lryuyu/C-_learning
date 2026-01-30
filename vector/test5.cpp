#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void test()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(20);
    v1.push_back(3);
    v1.push_back(40);
    v1.push_back(5);

    greater<int> gt;

    cout << gt(2,3) << endl;
    //µÈ¼Û
    cout << gt.operator()(2,3) << endl;
    cout << gt(3,2) << endl;
    sort(v1.begin(),v1.end(),gt);
    for(const auto &e : v1)
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
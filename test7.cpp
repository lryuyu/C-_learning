#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void test_string()
{
    string s1("hello word");
    cout << s1 << endl;

    s1.push_back('x');
    cout << s1 << endl;

    s1.append("yyyyy!!!!");
    cout << s1 << endl;
}

int main()
{
    test_string();

    return 0;
}
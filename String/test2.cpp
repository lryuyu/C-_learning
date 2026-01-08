#include <iostream>
#include <string>
using namespace std;

void test_string1()
{
    string s1;
    string s2("hello");
    string s3(s2);
    string s4(s2,3,5);
    string s5(s2,3);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    cin >> s1;
    cout << s1 << endl;
}

int main()
{
    test_string1();
     return 0;
}
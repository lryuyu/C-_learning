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
}

void push_back(const string& s)
{
    
}

void test_string2()
{
    //隐式类型转换
    string s2 = "hello world";
    const string& s3 = "hello";
    //构造
    string s1("hello world");
    push_back(s1);
    push_back("hello1111");
}

int main()
{
    test_string1();
    test_string2();
     return 0;
}
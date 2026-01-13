#include <iostream>
#include <string>
using namespace std;

void test_string()
{
    string s1 = "hello";
    string s2 = "world";

    string ret1 = s1+s2;
    cout << ret1 << endl;

    string ret2 = s1 + "xxxx";
    cout << ret2 << endl;
    
    string ret3 = "xxxx" + s1;
    cout << ret3 << endl;

    //字典比较
    cout << (s1 > s2) <<endl;
}

int main(){
    test_string();
    return 0;
}
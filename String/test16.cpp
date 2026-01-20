#include <iostream>
#include <string>
using namespace std;

int main()
{
//atoi:字符串转整型 itoa:整型转字符串

    int x = 0,y = 0;
    cin >> x >> y;
    string str = to_string(x + y);
    cout << str << endl;

    return 0;

}
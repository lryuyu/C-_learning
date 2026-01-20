#include <iostream>
#include <string>
using namespace std;
#include "string.h"
int main()
{
    bit::string s1("Hello worf");
    cout<< s1.c_str << endl;

    return 0;
}
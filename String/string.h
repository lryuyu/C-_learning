#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace bit
{
    class string
    {
    public:
        string(const char* str);
        ~string();
        const char* c_str() const;
    private:
        char* _str;
        size_t _size;
        size_t _capacity;
    };
}
#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace bit
{
    class string
    {
    public:
        //迭代器
        typedef char* iterator;
        typedef const char* const_iterator;
        iterator begin();
        iterator end();    

        const_iterator begin() const;
        const_iterator end() const;    

        string(const char* str);
        ~string();
        const char* c_str() const;

        void reserve(size_t n);

        void push_back(char ch);
        void append(const char* str);
        

    private:
        char* _str;
        size_t _size;
        size_t _capacity;
    };
}
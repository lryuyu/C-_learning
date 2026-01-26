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

        //string()
        string(const char* str = "");
        string(const string& s);
        ~string();

        string(const char* str);
        ~string();
        const char* c_str() const;

        void reserve(size_t n);

        void push_back(char ch);
        void append(const char* str);

        string& operator+=(char ch);
        string& operator+=(const char* str);

        //在指定位置插入单个字符；
        void insert(size_t pos,char ch);

        //在指定位置插入整段字符串；
        void insert(size_t pos,const char* str);

        //从指定位置删除指定长度的字符（默认删到末尾）。
        void erase(size_t pos,size_t len = npos);

        void clear();
        

    private:
        char* _str;
        size_t _size;
        size_t _capacity;

        //既是是声明也是定义，特例
        const static size_t npos = -1;
    
    };
    
}
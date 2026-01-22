#include <iostream>
#include <string>
using namespace std;
#include "string.h"

namespace bit
const size_t string::npos = -1;
{
void test1(){
    bit::string s1("hello word");
    cout << s1.c_str() <<endl;
    for (size_t i = 0; i < s1._size; i++)
    {
       s1[i]++;
    }

    for (size_t i = 0; i < s1._size; i++)
    {
       cout << s1[i] <<"";
    }
    cout << endl;
    //迭代器,封装：屏蔽了地城实现细节，提供了一种简单通用访问容器方式
    string::iterator it1 = s1.begin();
    while (it1 != s1.end)
    {
        cout << *it1 << " ";
        ++it1;
    }
    cout << endl;
    

    for (auto e : s1)
    {
        cout << e << " ";
    }
    cout << endl;

    bit::string s2;
    cout << s2.c_str() << endl;

    //const特点是不能修改
    const bit::string s3;
    string::const_iterator it3 = s3.begin();
    while (it3 != s3.end)
    {
        cout << *it3 << " ";
        ++it3;
    }
    cout << endl;

    for (size_t i = 0 ; i < s3._size(); i++){
        cout << s3[i] << " "
    }
        cout << endl;
}
}

void test2(){
    
    bit::string s1("hello world");
    cout << s1.c_str()<<endl;

    s1.push_back('x');
    cout << s1.c_str()<<endl;

    s1.append("yyyyy")
    cout << s1.c_str()<<endl;
}

void test3(){
    bit::string s1("hello world");

}
int main()
{
    bit::test1();

    cout << typeid(std::string::iterator).name() << endl;

    return 0;
    
}


// namespace bit{
//     class string{
//     private:
//         //char _buff[16]
//         char* _str;

//         size_t _size;
//         size_t _capacity;
//     public:
//         typedef char* iterator;

//         iterator begin();
//         iterator end();

//         //string();
//         string(const char* str = "");
//         ~string();
//         const char* c_str() const;

//         size_t size() const;
//         char& operator[](size_t pos);
//     };
// }

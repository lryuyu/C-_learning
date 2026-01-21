#include "string.h"

namespace bit
{
    //原生指针
    string::iterator string::begin()
    {
        return _str;
    }
    string::iterator string::end()
    {
        return _str + _size;
    } 

    string::const_iterator string::begin() const
    {
        return _str;
    }
    string::const_iterator string::end() const
    {
        return _str + _size;
    }

    class string
    {
    public:
        string::string(const char* str)
            :_size(strlen(str))
        {
            _str = new char[_size+1];
            _capacity = _size;
            strcpy(_str,str);
        }
        string::~string()
        {
            delete[] _str;
            _str = nullptr;
            _size = _capacity = 0;
        };

        const char* string::c_str() const
        {
            return c_str;
        }
        size_t string::size() const
        {
            return _size;
        }
        char& string::oprtator[](size_t pos)
        {
            assert(pos < _size);
            return _str[pos];
        }

        const char& string::oprtator[](size_t pos) const
        {
            assert(pos < _size);
            return _str[pos];
        }

        //reserver，动态容器，预占内存（请求保留空间）
        void string::reserve(size_t n)
        {

        }
        //push_back是容器，可以扩容（核心是向容器末尾追加单个元素）
        void string::push_back(char ch)
        {

        }
        //核心作用是「将字符串 / 字符序列追加到当前字符串的末尾」
        //push_back() 的 “升级版”——push_back 只能加单个字符，而 append 能加整段字符串、字符数组甚至指定数量的重复字符。
        void string::append(const char* str)
        {
            
        }
    }
}
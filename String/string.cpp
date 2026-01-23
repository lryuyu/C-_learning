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
            if(n > _capacity)
            {
                char* tmp = new char[n+1];
                strcpy(tmp,_str);
                delete[] _str;

                _str = tmp;
                _capacity = n;
            }

        }
        //push_back是容器，可以扩容（核心是向容器末尾追加单个元素）
        void string::push_back(char ch)
        {
            if (_size == _capacity)
            {
                size_t newcapacity = _capacity == 0?4: _capacity * 2;
                reserve(newcapacity);
            }
            _str[_size] = ch;
            _str[_size + 1] = '\0';
            ++_size;
        }
        //核心作用是「将字符串 / 字符序列追加到当前字符串的末尾」
        //push_back() 的 “升级版”——push_back 只能加单个字符，而 append 能加整段字符串、字符数组甚至指定数量的重复字符。
        void string::append(const char* str)
        {
            size_t len = strlen(str);
            if(_size + len > _capacity)
            {
                reserve(_size + len);
            }
            strcpy(_str+_size,str);
            _size += len;
        }

        void string::insert(size_t pos,char ch)
        {
            if (_size == _capacity)
            {
                size_t newcapacity = _capacity == 0?4: _capacity * 2;
                reserve(newcapacity);
            }

            int end = _size;
            while(end >= (int)pos){
                _str[end + 1] = _str[end];
                --end;
            }

            // size_t end = _size + 1;
            // while(end > pos)
            // {
            //     _str[end] = _str[end-1];
            //     --end;
            // }

            _str[pos] = ch;
            ++_size;
        }

        void string::insert(size_t pos, const char* str)
        {
            assert (pos<=_size);
            size_t len = strlen(str);
            if (_size + len >_capcity)
            {
                reserver(_size + len);
            }

            int end = _size;
            while (end>=pos)
            {
                _str[end + len] = _str[end];
                --end;
            }
            
            
        }

        void string::erase(size_t pos,size_t len)
        {

        }

    }
}
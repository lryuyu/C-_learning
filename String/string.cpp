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

        //s2(s1)
        // string::string(const string& s)
        // {
        //     _str = new cha[s._capacity + 1];
        //     strcpy(_str,s._str);
        //     _size = s._size;
        //     _capacity = s._capacity;
        // }

        //现代写法
        string::string(const string& s)
        {
           string tmp(s._str);
           swap(tmp);
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
            // if (_size == _capacity)
            // {
            //     size_t newcapacity = _capacity == 0?4: _capacity * 2;
            //     reserve(newcapacity);
            // }
            // _str[_size] = ch;
            // _str[_size + 1] = '\0';
            // ++_size;

            insert(_size,ch);

        }
        //核心作用是「将字符串 / 字符序列追加到当前字符串的末尾」
        //push_back() 的 “升级版”——push_back 只能加单个字符，而 append 能加整段字符串、字符数组甚至指定数量的重复字符。
        void string::append(const char* str)
        {
            // size_t len = strlen(str);
            // if(_size + len > _capacity)
            // {
            //     reserve(_size + len);
            // }
            // strcpy(_str+_size,str);
            // _size += len;

            insert(_size,str);

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

            // int end = _size;
            // while (end>=(int)pos)
            // {
            //     _str[end + len] = _str[end];
            //     --end;
            // }

            memcpy(_str + pos ,str ,len);
            _size += len;
            
            
        }

        void string::erase(size_t pos,size_t len)
        {
            //从pos删除len字符
            assert(pos < _size);
            //len大于前面字符个数时，有多少删多少
            if (len == npos || len >= _size - pos)
            {
                _str[pos] = '\0';
                _size = pos;
            }
            else
            {
                strcpy(_str + pos,_str + pos + len);
                _size -= len;
            }
        }

        size_t string::find(char ch , size_t pos)
        {
            for (size_t i = pos; i < _size; i++)
            {
               if (_str[i] == ch)
               {
                return i;
               }
            }
            return npos;
        }

        size_t string::find(const char* str,size_t pos)
        {
            const char* p = strstr(_str+pos,sub);
            return p - _str;
        }

        void string::swap(string& s)
        {
            std::swap(_str,s._str);
            std::swap(_size,s._size);
            std::swap(_capacity,s._capacity);
        }

        string substr(size_t pos,size_t len)
        {
            //len大于后面剩余字符，有多少取多少
            if (len > _size - pos)
            {
                string sub(_str + pos);
                return sub;
            }
            else
            {
                string sub;
                sub.reserve(len);
                for (size_t i = 0; i < len; i++)
                {
                    /* code */
                }
                
            }
            
        }

        void string::clear()
        {
            _str[0] = '\0';
            _size = 0;
        }

        istream& operator>> (ostream& os ,string& str)
        {
            _str.clear();
            char buff[128];
            //流提取
            char ch = is.get();
            while (ch != ' ' && ch != '\n')
            {
                buff[i++] = ch;
                if (i==127)
                {
                    buff[i] = '\0';
                    str += buff;
                    i==0;
                }
                
                ch = is.get();
            }
            if (i != 0)
            {
                buff[i] = '\0';
            }
            
            
            return is;
        }

        ostream& operator<< (ostream& os ,string& str)
        {
            //流插入
            for (size_t i = 0; i < str.size(); i++)
            {
                os << str[i];
            }
            
            return os;
        }

    }
}
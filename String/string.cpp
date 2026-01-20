#include "string.h"
namespace bit
{
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
    }
}
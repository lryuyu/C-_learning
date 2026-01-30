#pragma once
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
#include <string>
#include <assert.h>
namespace bit
{
    // template<class T>
    // class vector
    // {
    // public:
    //     

    // private:
    //     T* _a;
    //     size_t _size;
    //     size_t _capacity;
    // };

    template<class T>
    class vector
    {
    public:
        typedef T* iterator;

        iterator begin()
        {
            return _start;
        }

        iterator end()
        {
            return _finish;
        }

        ~vector()
        {
            if (_start)
            {
                delete[] _start;
                _start = _finish = _end_of_storage = nullptr;
            }
            
        }

        void reserve(size_t n)
        {
            if (n > capacity())
            {
                size_t oldsize = size();
                T* tmp = new T[n];

                if (_start)
                {
                    memcpy(tmp, _start ,sizeof(T) * size());
                    delete[] _start;
                }
                
                
                _start = tmp;
                _finish = _start + oldsize;
                _end_of_storage = _start + n;
            }

            
            
        }

        size_t capacity()
        {
            return _end_of_storage - _start;
        }

        size_t size()
        {
            return _finish - _start;
        }

        T& operator[](size_t i)
        {
            assert(i < size());

            return _start[i];
        }

        void push_back(const T& x)
        {
            if (_finish == _end_of_storage)
            {
                size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
                reserve(newcapacity);
            }

            *_finish = x;
            ++_finish;
            
        }

    private:
        iterator _start = nullptr;
        iterator _finish = nullptr;
        iterator _end_of_storage = nullptr;
    };

    void test_vector1()
    {
        vector<int> v1;
        v1.push_back(1);
        v1.push_back(20);
        v1.push_back(3);
        v1.push_back(40);
        v1.push_back(5);

        for (size_t i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;

        vector<int>::iterator it = v1.begin();
        while (it != v1.end())
        {
            cout << *it << " ";
        }
        cout << endl;


        
        
    };
}
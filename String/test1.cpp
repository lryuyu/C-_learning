#include <string>
#include <iostream>
using namespace std;

void Teststring()
{
    string s1;//构造空的string类对象s1
    string s2("hello bit");//用C格式字符串构造string类对象S2
    string s3(s2);//拷贝构造S3
}

int main(){
    string s = "hello";
    cout << "初始化字符串:" << s << endl;

    //size()/length()
    cout << "\n实际字符数(size/length): " << s.size() << "/" <<s.length() << endl;

    //capacity()
    cout << "当前容量(capacity):" << s.capacity() << endl;

    //empty()
    cout << "是否为空(empty):" << (s.empty() ? "yes":"no") << endl;

    //reserve(n)
    cout << "\n调用reserve(20)后:" << endl;
    s.reserve(20);
    cout << "实际字符数(size):" << s.size() << endl;

    //模拟扩容
    cout << "\n添加字符直到扩容：" << endl;
    while (s.size() < s.capacity())
    {
       s += '!';
    }
    cout << "扩容前最后状态：size=" << s.size() << ",capacity=" << s.capacity() << endl;
    s+='!';
    cout << "扩容后状态：size=" << s.size() << ", capacity=" << s.capacity() << endl;
    

    //shrink_to_fit():
    cout << "\n调用shrink_to_fit()后：" << endl;
    s.shrink_to_fit();
    cout << "实际字符数 (size): " << s.size() << endl;
    cout << "新容量 (capacity): " << s.capacity() << endl; // 容量接近实际长度
}
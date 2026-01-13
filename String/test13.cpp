#include <iostream>
#include <string>
using namespace std;

void test_string(){
    string file("string.cpp.zip");
    size_t pos =file.rfind('.');
    //string suffix = file.substr(pos,file.size()-pos);
    string suffix = file.substr(pos);
    cout << suffix << endl;

    string url("https://cplusplus.com/reference/string/string/rfind/");
    size_t pos1 = url.find('.');
    string url1 = url.substr(2,pos1 - 5);
    cout << url1 << endl;

    size_t pos2 = url.find('/',pos1+3);
    string url2 = url.substr(pos1+3,pos2-(pos1 + 3));
    cout << url2 << endl;
}

int main(){
    test_string();
    return 0;
}
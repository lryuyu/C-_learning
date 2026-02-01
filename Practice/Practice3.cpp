#include <iostream>
using namespace std;

int main()
{
    int year , month , day;
    while (cin>>year>>month>>day)
    {
        int monthDays[13] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
        int nowday = monthDays[month - 1] + day;
        if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))  
        {
            nowday += 1;
        }

        cout << nowday << endl;
        
    }

    return 0;
    
}
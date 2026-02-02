#include <iostream>
using namespace std;

int main()
{
    int year;
    int day;

    int mon[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    while (cin>>year>>day)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            mon[1] = 29;
        }else{
            mon[1] = 28;

        }
        for (int i = 0; i < 12; i++)
        {
            if (day <= mon[i])
            {
                printf("%04d-%02d-%02d\n",year,i+1,day);
                break;
            }else{
                day = day - mon[i];
            }
            
        }
        
    }
    
}
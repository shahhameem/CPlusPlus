#include <iostream>
using namespace std;

int main()
{
    enum day_of_week {sun, mon, tue, wed, thu, fri, sta};
    day_of_week day1, day2;
    day1 = sun;
    day2 = fri;
    cout << day1 << '\t' << day2;
    if(day1 > day2)
        cout << "\nDay 1 comes after day2";
    else 
        cout << "\nDay 1 comes before day 2";
    return 0;
}
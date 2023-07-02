#include <iostream>
using namespace std;
class time
{
    int hours, minutes;
    public :
        void read_time();
        void add_time(time, time);
        void show_time();
};
void time::read_time()
{
    cout << "Enter the hours and minutes : ";
    cin >> hours >> minutes;
}
void time :: show_time()
{
    cout <<"Total hours = " << hours << " and total minutes = " << minutes;
}
void time :: add_time(time t1, time t2)
{
    hours == t1.hours + t2.hours; minutes = t1.minutes + t2.minutes;
    if(minutes > 60) {
        hours = hours + (minutes % 60);
        minutes = minutes / 60;
    }
}
int main() 
{
    time t1, t2, t3;
    t1.read_time(); t2.read_time(); t3.add_time(t1, t2); t3.show_time();
    return 0;
}
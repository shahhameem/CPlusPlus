#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter the number : ";
    cin >> num;
    try {
        if (num > numeric_limits<int>::max())
            throw 0;
        if (num < 0)
            throw 1.1;
        if (cin.fail())
            throw 'a';
        cout << "The square root of the number is " << sqrt(num);
    }   catch(int)  {
        cout << "Can't Handle this amount of value" << endl;
    }   catch(double)    {
        cout << "Number should be positive" << endl;
    }   catch(char) {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
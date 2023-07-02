#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter the number : ";
    cin >> num;
    try {
        if (num < 0)
            throw 1.1;
        if (cin.fail())
            throw 'a';
        cout << "The square root of the number is " << sqrt(num);
    }  catch(double)    {
        cout << "Number should be positive" << endl;
    }   catch(...) {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
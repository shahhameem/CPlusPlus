#include <iostream>
using namespace std;

int main() 
{
    float x, y;
    cout << "Enter the numerator x and denomenator y : ";
    cin >> x >> y;
    try
    {
        if (y == 0)
            throw 10;
        cout << endl << "x / y = " << x/y << endl;
    }   catch (int i) 
        {
            cout << "Cannot divide by zero." << endl;
        }
        return 0;
}
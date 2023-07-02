#include <iostream>
using namespace std;
#define DEBUG
#define SIZE 20

int main()
{
    int a[SIZE], total = 0, n;
    cout << "Enter the number of elements ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the value of element ";
        cin >> a[i];
        total += a[i];
        #ifdef DEBUG
            cout << "At iteration " << i+1 << " running total = " << total << endl;
        #endif
    }
    cout << "Grand total = " << total;
    return 0;
}
#include <iostream>
using namespace std;
namespace firstnamespace
{
    int i = 10;
    int j = 20;
}

namespace secondnamespace
{
    float i = 14.62;
    float j = 20.5;
}

int main() 
{
    using namespace firstnamespace;
    cout << "Variable in first namespace " << i << endl;
    cout << "Variable in second namespace " << j << endl;
    return 0;
}
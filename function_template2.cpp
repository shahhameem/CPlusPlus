#include <iostream>
template <class T1, class T2>
void display(T1 a, T2 b)
{
    std::cout << "\na = " << a << "\tb = " << b << std::endl;
    return;
}
int main() 
{
    int i = 10; float f = 25.5;
    display(i, f);
    char ch = 'B';
    i = 20;
    display(i, ch);
    return 0;
}
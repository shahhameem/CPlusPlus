#include <iostream>
template <class T>
void display(T a, T b, char operation)
{
    switch(operation)
    {
        case '+': std::cout << a << operation << b << '=' << a+b << std::endl; break;
        case '-': std::cout << a << operation << b << '=' << a-b << std::endl; break;
        case '*': std::cout << a << operation << b << '=' << a*b << std::endl; break;
        case '/': std::cout << a << operation << b << '=' << a/b << std::endl; break;
        default : std::cout << "Undefined Operation";
    }
}
int main() 
{
    display(10, 20, '+');
    display(10, 20, '-');
    display(10, 20, '*');
    display(10.0, 20.0, '/');
    return 0;
}
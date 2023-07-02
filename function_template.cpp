#include <iostream>
template <class T>
void swap(T &a, T &b) 
{
    T temp = b;
    b = a;
    a = temp;
}
int main() 
{
    int x, y;
    std::cin >> x >> y;
    std::cout << "Before swapping x = " << x << " y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping x = " << x << " y = " << y << std::endl;
    float p, q;
    std::cin >> p >> q;
    std::cout << "Before swapping p = " << p << " q = " << q << std::endl;
    swap(p, q);
    std::cout << "After swapping p = " << p << " q = " << q << std::endl;
    char c1, c2;
    std::cin >> c1 >> c2;
    std::cout << "Before swapping c1 = " << c1 << " c2 = " << c2 << std::endl;
    swap(c1, c2);
    std::cout << "After swapping c1 = " << c1 << " c2 = " << c2 << std::endl;
    return 0;
}

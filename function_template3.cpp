#include <iostream>
#include <cstring>
template <class T>
T min(T a, T b)
{
    return (a < b)? a : b;
}
template <class T>
T min(T a, T b, T c)
{
    return (a < b) ? ((a < c) ? a : c ): ((b < c) ? b : c);
}
char* min(char* p, char* q)
{
    int k = strcmp(p, q);
    return (k < 0) ? p : q;
}
int main()
{
    int x = 10, y = 20, z = 30;
    std::cout<<"The minimum between 10 & 20 is " << min(x, y) << std::endl;
    std::cout<<"The minimum between 10, 20 & 30 is " <<min(x, y, z) << std::endl;
    std::cout<<"The minimum between 'xyz' and 'abc' is " << min("xyz", "abc") << std::endl;
    return 0;
}
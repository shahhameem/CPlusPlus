#include <iostream>
template <class T>
float avg(T x[], int size)
{
    float avg, sum = 0;
    for(int i = 0; i < size; i++)
        sum += x[i];
    avg = sum / size;
    return avg;
}
int main()
{
    int arr[10], size;
    std::cout << "Enter Size :";
    std::cin >> size;
    std::cout <<"\nEnter the integer elements :";
    for(int i = 0; i < size; i++)
        std::cin >> arr[i];
    std::cout << "The average of integer numbers = " << avg(arr, size) << std::endl;
    float arr2[10];
    std::cout << "Enter Size:";
    std::cin >> size;
     std::cout <<"\nEnter the float elements :";
    for(int i = 0; i < size; i++)
        std::cin >> arr2[i];   
    std::cout << "The average of float numbers = " << avg(arr2, size) << std::endl;
    return 0;
}
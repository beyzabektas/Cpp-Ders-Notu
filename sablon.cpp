#include <iostream>

template<typename T, typename U>
T max(T a,U b)
{
    return (a > b) ? a : b;
}

/*float max(float a,float b)
{
    return (a > b) ? a : b;
}

int max(int a,int b)
{
    return (a > b) ? a : b;
}*/

int main()
{
    //std::cout << max(1.1,5.5);
    std::cout << max<int>(10,5.5);
}
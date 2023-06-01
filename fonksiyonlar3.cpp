#include <iostream>
#include <string>

using fint = int(*)(int, int);

int topla(int a, int b)
{
    return a + b;
}

int getir(fint f)
{
    int a = f(10,10);
    return a;
}

int main()
{
    int b = getir(topla);
    std::cout << b;
}
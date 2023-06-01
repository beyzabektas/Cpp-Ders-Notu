#include <iostream>

template<typename T>
class Mat
{
    public:
        T a{};
        T b{};

        T topla()
        {
            return a + b;
        }
};

class Silah{};
class Mermi{};

template<class T>
T* nesneYap()
{
    T nesne;
    return &nesne;
}

int main()
{
    std::cout <<nesneYap<Silah>();
    /*Mat<int>mat;
    mat.a = 10;
    mat.b = 20;
    std::cout<<mat.topla();

     Mat<float>mat1;
    mat1.a = 10.5;
    mat1.b = 20.5;
    std::cout<<mat1.topla();*/
}
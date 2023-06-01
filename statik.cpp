#include <iostream>

//const object
//const method
//const variable
//const parameter
//const pointer
//return const

class Kitap
{
    public:
        static int adet;

    Kitap()
    {
        adet++;
    }
    static int get()
    {
        return adet;
    }
};

int Kitap::adet = 0;

int main()
{
    Kitap kitap;
    Kitap kitap1;
    Kitap kitap2;

    kitap.get();
    std::cout << Kitap::get();
}
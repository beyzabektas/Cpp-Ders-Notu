#include <iostream>

class Silah
{
public:
    int* a = nullptr;
    int* b = nullptr;

    Silah(int toplamaBirinciSayi,int toplamaikinciciSayi)
    {
        a = new int;
        b = new int;
        *a = toplamaBirinciSayi;
        *b = toplamaikinciciSayi;
    }

    ~Silah()
    {
        delete a;
        delete b;
        std::cout << "Silindi";
    }
};

int main()
{
   Silah* silah = new Silah(10,10);

    delete silah;

}
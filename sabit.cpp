#include <iostream>

//const object
//const method
//const variable
//const parameter
//const pointer
//return const

class Silah
{
    private:
        int deger = 10;
    public:

        int* get(Silah* ptr)
        {
            deger = 600;
            return &deger;
        }
        int getBaska()
        {
            return deger;
        }
};

int main()
{
    Silah silah;
    silah.get(&silah);
   //const int* a =silah.get();

    std::cout << silah.getBaska();
}
#include <iostream>

class Silah
{
public:
    Silah()
    {
        std::cout << "Olustu";
    }

    ~Silah()
    {
        std::cout << "Silindi";
    }

};

int main()
{
    /*Silah* silah = new Silah;

    delete silah;*/
    
    Silah* silah;
    {
        Silah* silah = new Silah;
    }

    delete silah;

    /*int* a = new int;

    *a = 10;
    
    delete a;*/

    //int pointer gösterdigi alan bir int kapladığı
    //heap yer kadar olacak.
    std::cout << "Hello World!\n";
}
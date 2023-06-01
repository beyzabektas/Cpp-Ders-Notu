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
    typedef unsigned int  btk;
    int a = 10;

    btk a = -10;

    //int* a = new int;
    //std::cout << sizeof(int);

    /*int* a = (int*)malloc(sizeof(int));
    *a = 10;
    free(a);*/

    /*int* a = new int;
    *a = 10;

    int* ab = a;

    delete a;
    std::cout << *ab;*/
}
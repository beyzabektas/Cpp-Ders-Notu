#include <iostream>

#define DEBUG
//#define SAYI 1
//#define TOPLA(a,b) (a + b)

int main()
{
    #ifndef DEBUG
        std::cout << "Dev mesajları";
    #endif 
    //std::cout << TOPLA(SAYI,SAYI);


}
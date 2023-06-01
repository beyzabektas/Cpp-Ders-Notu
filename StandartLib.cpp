#include <iostream>

namespace btk{
    int sayi = 100;

    void merhaba(){
    std::cout << "test";
    }
}

void merhaba(){
    std::cout << "test2";
}

int main()
{
    btk::merhaba();
    merhaba();
}
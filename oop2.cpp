#include <iostream>

class Hesapla
{
    public:
    int genislik;
    int yukseklik;
    int alan;

    void giris()
    {
        std::cout<<"Yukseklik gir"<<std::endl;
        std::cin>> yukseklik;

        std::cout<<"Genislik gir"<<std::endl;
        std::cin>>genislik;
    }
    void hesapla()
    {
        alan = yukseklik * genislik;
        std::cout <<alan;
    }
};

int main()
{
    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();
}
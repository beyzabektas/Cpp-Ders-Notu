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
    int adet = 0;
    std::cout << "Dizi bouyutu nedir?" << std::endl;
    std::cin >> adet;

    int* dizi= new int[adet];

    for(int i = 0;i < adet;i++){
        std::cin >> dizi[i];
    }
    std::cout << "Girilen elemanlar" << std::endl;
    for(int i = 0;i < adet;i++){
        std::cout << dizi[i];
    }

    delete[] dizi;

    /*bu sekilde ifade edemeyiz cünkü adet ne ise derleyici
    bellekte 5 tane int koyulabilecegi alan ayıracak.
    Fakat derleme asamasında çoktan bilmesi lazım kullanıcı 
    tarafından verilmeden önce*/
}
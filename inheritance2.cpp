#include <iostream>

class Silah
{
    public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;

};

class Ak47 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunulugu;
    bool durbun;

    void atesEt()
    {

    }
};

class Pistol : public Silah
{
    public:
    bool seriTek;
    int kayisUzunulugu;
    bool durbun;

    void atesEt()
    {

    }
};

class M1 : public Silah
{
    bool seriTek;
    int kayisUzunulugu;
    bool durbun;

    void atesEt()
    {

    }
};

int main()
{
    /*int sayi = 10;
    int& deneme = sayi;
    deneme = 5;
    sayi = 50;
    std::cout << sayi;
    */

    Ak47 ak47;
    //ak47.isim = "Test";
    Ak47* ak47Ptr = &ak47;
    
 
    
    //ak47Ptr->isim = "Test";
    //ak47Ptr->atesEt();

    Ak47& ak47Ref = ak47;
    ak47Ref.isim = "Test";

    //test(ak47, ak47Ptr);

    return 0;
}
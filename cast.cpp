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

void goster(Ak47* ak47Ptr)
{
std::cout << ak47Ptr->isim;
}

 /*void test(Ak47* ak47Ptr)
    {
        std::cout << ak47Ptr->durbun;
    }
 */
int main()
{
    Ak47 ak47;
    ak47.isim = "Ak47";

    goster(&ak47);
    
    Pistol pistol;
    pistol.isim = "Pistol";

    M1 m1;
    m1.isim = "M1";

    /*Pistol pistol;
    Ak47* ak47Ptr = (Ak47*) &pistol;
    test((Ak47*)&pistol);
    */

    /*Ak47 ak47;
    ak47.seriTek = 1;
    ak47.isim = "123";

    Silah* silahPtr = &ak47;

    Silah silah;
    silah.isim = "Sila 1";
    silah.mermiKapasitesi = 500;
    silah.renk = "Siyah";

    Ak47* ak47Ptr = (Ak47*) silahPtr;
    std::cout << ak47Ptr->seriTek;
    */

   /*Ak47 ak47;
    ak47.isim = "Test";

    Silah* silahPtr = &ak47;
    silahPtr->isim = "merhaba";

    std::cout << ak47.isim;
    */
   return 0;
}
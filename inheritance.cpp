#include <iostream>

class Silah
{
    public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;

    Silah()
    {
        std::cout << "silah olustu";
    }

    ~Silah()
    {
        std::cout << "silah bitti";
    }
};

class Ak47 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunulugu;
    bool durbun;

    Ak47()
    {
        std::cout << "Ak47 olustu";
    }

    ~Ak47()
    {
        std::cout << "Ak47 bitti";
    }
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
    Ak47 ak47;
    ak47.isim = "Ak47 Yeni Dizayn";
    ak47.renk = "sari";
    return 0;
}
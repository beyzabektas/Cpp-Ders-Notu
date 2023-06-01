#include <iostream>

class Silah
{
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        void ates()
        {
            std::cout << "pis pis";
        }
};

class Ak47 : public Silah
{
    public:
        bool seriTek;
        int kayisUzunulugu;
        bool durbun;

        void atesEt()
        {
            std::cout << "bom bom";
        }
};

class Pistol : public Silah
{
    public:
        int kurmaKoluDeseni;

        virtual void atesEt()
        {
            std::cout << "bam bam";
        }
};

class M1 : public Silah
{
    public:
        bool seriTek;
        int kayisUzunulugu;
        int kurmaPozisyonu;

        void atesEt()
        {
            std::cout << "bum bum";
        }
};

void atesEt(Silah* silahPtr)
{
    silahPtr->ates();
}

int main()
{
    Ak47 ak47;
    atesEt(&ak47);

   /* Pistol pistol;
    M1 m1;

    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1);*/
    
    return 0;
}
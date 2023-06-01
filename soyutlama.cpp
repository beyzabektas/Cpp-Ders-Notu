#include <iostream>

class Hayvan
{
    public:
    virtual void sesCal()  = 0;
};

class Kopek: public Hayvan
{
    public:
    void sesCal()
    {
        std::cout << "Hav";
    }
};

class Kedi: public Hayvan
{
    public:
    void sesCal()
    {
        std::cout << "Miyav";
    }
};

class Ordek : public Hayvan
{
    public:
    void sesCal()
    {
        std::cout << "Vak";
    }
};

void tumSesCal(Hayvan* hPtr)
{
    hPtr->sesCal();
}

int main()
{
    Kopek kopek;
    Kedi kedi;
    Ordek ordek;

    tumSesCal(&kopek);
}
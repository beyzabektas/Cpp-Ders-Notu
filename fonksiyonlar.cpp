#include <iostream>

int topla(int sayi1, int sayi2);
//declaration bildirim

double topla(double sayi1, double sayi2)
{
    std::cout << "double";
    return sayi1 + sayi2;
}
//double olmasaydı da en iyi seceneği bulacaktı.

int main()
{
    double a = 10.5;
    double b = 10.7;
   std::cout << topla(5,5);
}

//defination tanımlama
int topla(int sayi1, int sayi2)
{
       std::cout << "int";
       return sayi1 + sayi2;
}


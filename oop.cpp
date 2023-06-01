#include <iostream>

class Matematik
{
    public:
    int a;
    int b;
    int result = 0;

    void topla()
    {
        this ->result = this -> a + this ->b;
    }
    void print()
    {
        std::cout << this->result;
    }
}
/*prosedürel
int a= 10;
int b=20;
std::cout<<a+b; */

/*fonksiyonel
int a = 10;
int b = 20;
print(topla(a,b));*/

//nesnesel
int main()
{
    Matematik mat;
    mat.a = 10;
    mat.b = 20;
    mat.topla();
    mat.print();
}
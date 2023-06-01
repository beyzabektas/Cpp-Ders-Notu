#include <iostream>

class Silah {
    public:
        int d{};

        Silah(){
            std::cout << "Olustu";
        }

        ~Silah(){
            std::cout << "Silindi";
        }
};

int main()
{
    Silah* silah = new Silah();

    std::shared_ptr<Silah>ptr = std::make_shared<Silah>();
    //std::cout << ptr->d;
    std::cout << ptr.use_count();
}
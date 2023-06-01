#include <iostream>

class Ex{
    private:
       std::string message;
    public:
        Ex(const std::string message)
        {
            this->message = message;
        }
        std::string yaz(){
            return this->message;
        }
};

double bolme(int a,int b)
{
    try
    {
        if(b < 1)
        {
            throw -1;
        }
        if (a < 1)
        {
            //throw "0 bolunemez";
            throw Ex("Merhaba");
        }
        return a/b ;
    }
    catch(int err)
    {
        std::cout << err << "Bir sayi 0'a bolunemez";
    }
    catch(const char* err)
    {
        std::cout << *err << "Bir sayi 0'a bolunemez";
    }
    catch (Ex err){
        std::cout << err.yaz();
    }
}

int main()
{
    std::cout << bolme(0,3);
}
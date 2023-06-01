#include <iostream>
#include <string>

void print(std::string text = "test", int a = 0, bool as =false)
{
    std::cout << text;
}

int main()
{
    print();
}
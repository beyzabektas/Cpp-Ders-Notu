#include <iostream>

void test(char* dizi)
{
    std::cout <<dizi;
    //for (int i = 0; i < 3; i++)
    //std::cout << dizi[i];
}

int main()
{
    char a[]{"Beyza"};
  //int dizi[3]{1,2,3};
  test(a);
  //std::cout <<dizi;
}
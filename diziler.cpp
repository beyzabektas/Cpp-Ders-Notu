#include <iostream>
#include <iterator>

int main()
{
    //int puanlar[3]{10,20,30};
    //int* ptr = puanlar+1;
    //pointera 1 eklersek bellek adresini geçmiş oluruz.
    /*puanlar[0]
    int* ptr = puanlar;

    puanlar[1]
    int* ptr = puanlar+1;

    puanlar[2]
    int* ptr = puanlar+2;
    */
    
    //std::cout<< puanlar[3];

    /*for(int i=0; i < 3; i++)
    {
       std::cout<< puanlar[i];
    }*/

   /* int dizi[1][1][1][1]
    {
        {
            {
                {
                    1
                }
            }
        }
    };
     std::cout<< dizi[0][0][0][0];
     */

    int dizi[3][2]
    {
        {
            12,56
        },
        {
            5,9
        },
        {
            10,25
        }
    };
    std::cout<<std::size(dizi[0]);
} 
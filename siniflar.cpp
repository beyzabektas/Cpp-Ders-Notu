#include <iostream>

class Payment
{
    private:
        float tutar;
    public:
        std::string paraBirimi;

        void setTutar(float t)
        {
            if(t > 0)
            {
                tutar = t;
            }
            else
            {
                tutar = 0.1;
            }
        }
        
        void pay()
        {
            std::cout << tutar << ":Odeme alindi";
        }
        friend void degistir(Payment* paymentPtr);
};

void degistir(Payment paymentPtr)
{
    paymentPtr->tutar = -10;
}

int main()
{
    Payment payment;
    degistir(&payment);
    payment.paraBirimi = "tl";
    payment.pay();
}
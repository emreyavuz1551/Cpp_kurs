#include <iostream>
#include <string>

class Payment
{
    private:
        std::string hascode ="123456789";
    public:
        std::string paraBirimi = "tl";
        std::string tutar = "0";
        
        void pay(){
            std::cout << "Veriler bankaya göderiliyor.Parabirimi: " + this ->paraBirimi + "Tutar:" +this->tutar + "Kod:" + this->hascode;
        }
};

int main()
{
    Payment payment;
    payment.paraBirimi = "tl";
    payment.tutar = "50";
    payment.pay();
    return 0;
}